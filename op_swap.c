/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:00 by marieduneau       #+#    #+#             */
/*   Updated: 2025/02/16 23:18:00 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_stack *stack)
{
    t_node  *first;
    t_node  *second;

    if (stack->size < 2)
        return ;
    first = stack->top;
    second = stack->top->next;
    first->next = second->next;
    second->next = first;
    stack->top = second;
}

void    sa(t_stack *stack_a)
{
    swap(stack_a);
    ft_putstr_fd("sa\n", 1);
}

void    sb(t_stack *stack_b)
{
    swap(stack_b);
    ft_putstr_fd("sb\n", 1);
}

void    ss(t_stack *stack_a, t_stack *stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_putstr_fd("ss\n", 1);
}

// Décompo visuelle sa :
// stack a -> [3] [5] [8]
// first  = [3] → [5] → [8] → NULL ---------> first  -> [3] → [8] → NULL
// second = [5] → [8] → NULL  --------------> second -> [5] → [3] → [8] → NULL


// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

// ss : sa and sb at the same time.

