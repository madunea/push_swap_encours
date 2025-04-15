/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:02:48 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/21 13:10:20 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    assign_index(t_stack *stack_a)
{
    int     index;
    t_node  *comparison_node;
    t_node  *current;

    current = stack_a->top;
    while (current)
    {
        index = 0;
        comparison_node = stack_a->top;
        while (comparison_node)
        {
            if (comparison_node->value <  current->value)
                index++;     
            comparison_node = comparison_node-> next;
        }
    current->index = index;
    current = current->next;
    }
}