/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:49:55 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 16:49:55 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void  *ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    if (!lst ||!new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    temp = *lst;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

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

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *new_elem;

    if (!lst || !f || !del)
        return ;
    new_list = NULL;
    while (lst)
    {
        new_elem = ft_lstnew(f(lst->content));
        if (!new_elem)
        {
            ft_lstclear(new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_elem);
        lst = lst->next;
    }
    return (new_list);
}

/*
void *duplicate_content(void *content)
{
    char *str = (char *)content;
    return (strdup(str)); // Duplique le contenu
}

// Fonction de suppression
void del_content(void *content)
{
    free(content);
}

// Fonction pour afficher une liste
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
    t_list *original_list;
    t_list *mapped_list;

    // Création de la liste originale
    original_list = ft_lstnew(strdup("Element 1"));
    original_list->next = ft_lstnew(strdup("Element 2"));
    original_list->next->next = ft_lstnew(strdup("Element 3"));

    printf("Liste originale :\n");
    print_list(original_list);

    // Transformation avec ft_lstmap
    mapped_list = ft_lstmap(original_list, duplicate_content, del_content);

    printf("Liste transformée :\n");
    print_list(mapped_list);

    // Libération de la mémoire
    ft_lstclear(&original_list, del_content);
    ft_lstclear(&mapped_list, del_content);

    return (0);
}
*/