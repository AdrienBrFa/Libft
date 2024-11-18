/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:47:45 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 10:47:45 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int  number_len(int n)
{
    int len;

    len = 1;
    if (n < 0)
        len = 2;
    while (n > 9)
    {
        n /= 10;
        len += 1;
    }
    return (len);
} 

char    *ft_itoa(int n)
{
    int length;
    int m;
    char    *texte;

    length = number_len(n);
    texte = malloc(length * sizeof(char));
    if (n < 0)
    {
        n = -n;
        texte[length] = '-';
    }
    while (length != 0)
    {
        texte[length] = (n % 10) + '0';
        n = n / 10;
        length -= 1;
    }
    return (texte);
}

int main(int argc, char **argv)
{
    argc = 0;
    printf("  int: %d\n", atoi(argv[1]));
    printf("alpha: %s\n", ft_itoa(atoi(argv[1])));
    return (0);
}