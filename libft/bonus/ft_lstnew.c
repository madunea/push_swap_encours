/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:29:30 by maduneau          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:32 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
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

int main()
{
    t_list *myList = ft_lstnew("Hello my love");
    t_list *temp = myList;

    while(temp != NULL)
    {
        printf("%s", (char *)temp->content);
        temp = temp->next;
    }    
    //free(myList); 
    return (0);
}