/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfaure <adfaure@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:25:13 by adfaure           #+#    #+#             */
/*   Updated: 2024/11/18 15:25:13 by adfaure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if (!lst)
        return (0);
    while(lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
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

    printf("Liste avant l'ajout :\n");
    print_list(head);
    printf("Nombre d'élèments liste: %d", ft_lstsize(head));

    // Ajouter un nouvel élément au début
    new_elem = ft_lstnew("Nouvel Element");
    ft_lstadd_front(&head, new_elem);

    printf("Liste après l'ajout :\n");
    print_list(head);
    printf("Nombre d'élèments liste après: %d", ft_lstsize(head));

    // Libérer la mémoire (facultatif ici)
    while (head)
    {
        t_list *tmp = head->next;
        free(head);
        head = tmp;
    }
    return (0);
}
*/