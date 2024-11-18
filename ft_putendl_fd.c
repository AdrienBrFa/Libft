/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:38:35 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 14:38:35 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, s[i], 1);
        i++;
    }
    write(fd, '\n', 1);
}

int main(int argc, char **argv)
{
    argc = 0;
    ft_putendl_fd(argv[1], 1);
    return (0);
}