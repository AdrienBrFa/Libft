/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:28:49 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 16:28:49 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

/*
// Fonction pour libérer le contenu
void del_content(void *content)
{
    free(content);
}

// Fonction pour créer un nouvel élément de liste
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
    t_list *elem_to_delete = NULL;

    // Création d'une liste chaînée
    head = ft_lstnew(strdup("Element 1"));
    head->next = ft_lstnew(strdup("Element 2"));
    elem_to_delete = head->next; // On marque "Element 2" pour suppression
    head->next->next = ft_lstnew(strdup("Element 3"));

    printf("Liste avant suppression :\n");
    print_list(head);

    // Suppression d'un élément
    ft_lstdelone(elem_to_delete, del_content);

    printf("Liste après suppression d'un élément :\n");
    print_list(head);

    // Libérer le reste de la liste
    while (head)
    {
        t_list *tmp = head->next;
        ft_lstdelone(head, del_content);
        head = tmp;
    }

    return (0);
}
*/