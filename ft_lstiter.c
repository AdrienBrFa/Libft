/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:45:33 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 16:45:33 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}

/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

// Fonction pour créer un nouvel élément
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

int main(void)
{
    t_list *head = NULL;

    // Création d'une liste
    head = ft_lstnew("Element 1");
    head->next = ft_lstnew("Element 2");
    head->next->next = ft_lstnew("Element 3");

    printf("Contenu de la liste :\n");
    ft_lstiter(head, print_content);

    // Libération de la liste
    while (head)
    {
        t_list *tmp = head->next;
        free(head);
        head = tmp;
    }

    return (0);
}
*/