/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:39:24 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 14:39:24 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		n = 147483648;
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar(n + '0', fd);
}

int main(int argc, char **argv)
{
    argc = 0;
    ft_putnbr_fd(atoi(argv[1]), 1);
    return (0);
}