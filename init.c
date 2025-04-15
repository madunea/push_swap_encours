/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:00 by marieduneau       #+#    #+#             */
/*   Updated: 2025/02/18 12:05:42 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *init_node(int value)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node->value = value;
    node->index = 0;
    node->next = NULL;
    return (node);
}

void    add_node(t_stack *stack, t_node *node)
{
    t_node  *current_node;
    
    if (!stack || !node)
        return ;
    if (!stack->top)
        stack->top = node;
    else
    {
        current_node = stack->top;
        while (current_node->next != NULL)
            current_node = current_node->next;
        current_node->next = node; 
            //un nouveau noeud qui s'ajoutera à la fin de la pile/stack
            //diff avec push qui ajoute au début de la pile/stack
    }
    stack->size++;
   }

t_stack *init_stack(void)
{
    t_stack *stack;
    // t_stack *stack_a;
    // t_stack *stack_b;
    
    stack = malloc(sizeof(t_stack));
    if (stack == NULL)
        return (NULL);
    stack->top = NULL;
    stack->size = 0;
    return (stack);
}
