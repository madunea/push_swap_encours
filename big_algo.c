/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:15:18 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/21 15:34:38 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max_int(t_stack *stack_a)
{
    t_node  *current;
    int     max;
    
    if (!stack_a || !stack_a->top)
        return (-1);
    current = stack_a->top;
    max = current->value;

    while (current)
    {
        if (current->value > max)
            max = current->value;
        current = current->next;
    }
    return (max);
}

int compute_max_bits(t_stack *stack_a) 
{
    int max_int;
    int bits;

    max_int = find_max_int(stack_a);
    if (max_int == -1)
        return (0);

    bits = 0;
    while ((max_int >> bits) != 0)
        bits++;
    return (bits);
}

void    radix_sort(t_stack *stack_a, t_stack *stack_b)
{
    int max_bits;
    int i;
    int bit;
    int current_value;
    
    max_bits = compute_max_bits(stack_a);
    if (max_bits == 0)
        return ;
    bit = 0;
    while (bit < max_bits)
    {
        i = 0;
        while (i < stack_a->size)
        {
            current_value = stack_a->top->value;
            if ((current_value >> bit) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            i++;
        }   
        while (stack_b->size > 0)
        pa(stack_a, stack_b);
        bit++;
    }
}


void	big_algo(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_is_sorted(stack_a) == 1)
	{
        radix_sort(stack_a, stack_b);
	}
    else
        printf("Stack is already sorted\n");
    return ;  
}
