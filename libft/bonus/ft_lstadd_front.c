/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:47:01 by maduneau          #+#    #+#             */
/*   Updated: 2024/09/30 16:04:12 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}
                    t_list;
    
t_list *ft_lstnew(void *content)
{
    t_list *new;
    
    new = malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int main(void)
{
    t_list  *prevList = ft_lstnew("My love !");
    t_list  *addedNode = ft_lstnew("Hello, ");
    
    ft_lstadd_front(&prevList, addedNode);
    //t_list  *newList = ft_lstadd_front((char *)prevList ,"Hello");
    //printf("%s", (char *)newList);
    
    t_list *temp = prevList;
    while (temp != NULL)
    {
      printf("%s", (char *)temp->content);
      temp = temp->next;
    }
    /*while (prevList)
    {
        t_list *temp =
    }*/
    return (0);
}