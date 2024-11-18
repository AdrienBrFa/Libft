/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:38:35 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 13:38:35 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char    *result;

    i = 0;
    result = malloc(ft_strlen(s) * sizeof(f));
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    return (result);
}
