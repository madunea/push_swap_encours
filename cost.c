/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:15:18 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/21 15:14:31 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_move_cost(t_stack *stack)
{
    t_node *current;
    int i;
        
    current = stack->top;
    i = 0;
    
    while (current)
    {
        if (i <= stack->size / 2)
            current->move_cost = i;
        else
            current->move_cost = stack->size - i;
        current = current->next;
        i++;
    }
}

// Trouver un élément dans stack_a dont l'index est le plus proche (en étant supérieur) de celui de target_node_b dans stack_b.
t_node    *find_next_index(t_stack *stack, t_node *target_b, int min_index_diff)
{
    t_node  *current;
    t_node  *closest_node;
    int     current_index_diff;
    
    closest_node = NULL;
    current = stack->top;
    // closest_node = find_max(stack);
    
    while (current)
    {
        if (current->index > target_b->index)
        {
            current_index_diff = current->index - target_b->index;
            if (current_index_diff < min_index_diff)
            {
                closest_node = current;
                min_index_diff = current_index_diff;
            }
        }
        current = current->next;
    }
    return (closest_node);
}


t_node	*find_cheapest(t_stack *stack)
{
	t_node	*current;
	t_node	*value;

	current = stack->top;
	value = current;
	while (current)
	{
		if (current->move_cost < value->move_cost)
			value = current;
		current = current->next;
	}
	return (value);
}


void    final_cost(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *current_b;
    t_node  *next_index;
    
    current_b = stack_b->top;
    find_move_cost(stack_a);
    find_move_cost(stack_b);
    while (current_b)
    {
       next_index = find_next_index(stack_a, current_b, __INT_MAX__); 
       current_b->move_cost = current_b->move_cost + next_index->move_cost;
       current_b = current_b->next;
    }
}
