/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:00 by marieduneau       #+#    #+#             */
/*   Updated: 2025/02/18 11:56:08 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_stack *stack)
{
    t_node  *old_top;
    t_node  *last;
    
    if (!stack || !stack->top || !stack->top->next)
        return ;
    old_top  = stack->top;
    stack->top = stack->top->next;

    last = stack->top;
    while (last->next)
        last = last->next;  
    last->next = old_top;
    old_top->next = NULL;
}

void    ra(t_stack *stack_a)
{
    rotate(stack_a);
    ft_putstr_fd("ra\n", 1);
}

void    rb(t_stack *stack_b)
{
    rotate(stack_b);
    ft_putstr_fd("rb\n", 1);
}

void    rr(t_stack *stack_a, t_stack *stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putstr_fd("rr\n", 1);
}

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
// Avant ra():     [5] -> [8] -> [3] -> [1] -> NULL
// Après ra():     [8] -> [3] -> [1] -> [5] -> NULL

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

// rr : ra and rb at the same time