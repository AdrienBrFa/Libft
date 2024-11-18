/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:31 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 15:29:31 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list  *ft_lstlast(t_list *lst)
{
    while (lst->next)
    {
        lst = lst->next;
    }
    return (lst);
}

/*
t_list  *ft_lstnew(void *content)
{
    t_list  *new_elt;

    new_elt = malloc(sizeof(t_list));
    if (!new_elt)
        return (NULL);
    new_elt->content = content;
    new_elt->next = NULL;
    return (new_elt);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *head = NULL; // Début de la liste (vide au départ)
    t_list *new_elem;

    // Création de quelques éléments
    head = ft_lstnew("Element 1");
    head->next = ft_lstnew("Element 2");

    printf("Liste :\n");
    print_list(head);

    printf("Dernière élément :\n");
    print_list(ft_lstlast(head));
}
*/