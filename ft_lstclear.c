/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:34:15 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 16:34:15 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    if (!lst || !del || *lst == NULL)
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free((*lst));
        (*lst) = temp;
    }
    (*lst) = NULL;
}
/*
// Fonction pour libérer le contenu
void del_content(void *content)
{
    free(content);
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

// Fonction pour afficher la liste
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
    t_list *head = NULL;

    // Création d'une liste
    head = ft_lstnew(strdup("Element 1"));
    head->next = ft_lstnew(strdup("Element 2"));
    head->next->next = ft_lstnew(strdup("Element 3"));

    printf("Liste avant suppression :\n");
    print_list(head);

    // Supprimer tous les éléments
    ft_lstclear(&head, del_content);

    printf("Liste après suppression :\n");
    if (!head)
        printf("La liste est vide.\n");

    return (0);
}
*/