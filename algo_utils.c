/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:00:30 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/21 15:18:26 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//  REMARK : on peut return le node au lieu de l'index (on travaille donc avec le node au lieu de l'index)

int	stack_is_sorted(t_stack *stack_a)
{
	t_node	*current;

	if (stack_a == NULL || stack_a->top == NULL)
		return (0);
	current = stack_a->top;
	while (current->next != NULL)
	{
		if (current->value > current->next->value)
			return (1);
		current = current->next;
	}
	return (0);
}

t_node *find_min(t_stack *stack_a)
{
   t_node *current;
   t_node *min;
  
    if (!stack_a || !stack_a->top)
        return (NULL);
    current = stack_a->top;
    min = stack_a->top;

    while (current)
    {
        if (current->value < min->value)
        min = current;
        current = current->next;
    }
    return(min);
}

t_node *find_max(t_stack *stack_a)
{
    t_node  *current;
    t_node  *max;
    
    if (!stack_a || !stack_a->top)
        return (NULL);
    current = stack_a->top;
    max = stack_a->top;

    while (current)
    {
        if (current->value > max->value)
            max = current;
        current = current->next;
    }
    return (max);
}

int find_position(t_stack *stack_a, t_node *target)
{
    int position;
    t_node  *current;

    if (!stack_a || !stack_a->top || !target)
        return (-1);
    current = stack_a->top;
    
    position = 0;
    while (current)
    {
        if (current == target)
            return (position);
        current = current->next;
    position++;
    }
    return (1);
}
