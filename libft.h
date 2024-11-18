/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:51:18 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 14:51:18 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h> // Pour utiliser NULL et size_t

// Définition de la structure s_list
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

#endif
