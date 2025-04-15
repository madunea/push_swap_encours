/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:00 by marieduneau       #+#    #+#             */
/*   Updated: 2025/02/20 11:55:21 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *first_b;

    if (!stack_b || !stack_b->top)
        return ;
    first_b = stack_b->top;
    stack_b->top = stack_b->top->next;
    stack_b->size--;
    // first_b->next = NULL;
    first_b->next = stack_a->top;
    stack_a->top = first_b;
    stack_a->size++;
    ft_putstr_fd("pa\n", 1);
}

void    pb(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *first_a;

    if (!stack_a || !stack_a->top)
        return ;
    first_a = stack_a->top;
    stack_a->top = stack_a->top->next;
    stack_a->size--;
    // first_a->next = NULL;
    first_a->next = stack_b->top;
    stack_b->top = first_a;
    stack_b->size++;
    ft_putstr_fd("pb\n", 1);
}


// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

    
// //////////////////////

// static void	push(t_stack *src, t_stack *dest)
// {
// 	if (src == NULL || src->first == NULL)
// 		return ;
// 	push_node(dest, pop_first(src));
// }

// void	op_pa(t_stack *stack_a, t_stack *stack_b)
// {
// 	if (stack_b->size == 0)
// 		return ;
// 	push(stack_b, stack_a);
// 	ft_putstr_fd("pa\n", 1);
// }


// void	push_node(t_stack *stack, t_node *noeud)
// {
// 	if (stack == NULL || noeud == NULL)
// 		return ;
// 	noeud->next = stack->first;
// 	stack->first = noeud;
// 	stack->size = stack->size + 1;
// }

// t_node	*pop_first(t_stack *stack)
// {
// 	t_node	*first_elem;

// 	if (stack == NULL || stack->first == NULL)
// 		return (NULL);
// 	first_elem = stack->first;
// 	stack->first = stack->first->next;
// 	stack->size = stack->size - 1;
// 	first_elem->next = NULL;
// 	return (first_elem);
// }


// pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
// Décompo visuelle pa :
// stack a -> [3] [5] [8]
// stack b -> [1] [9]

// first  = [3] → [5] → [8] → NULL ---------> first  -> [1] → [3] → [5] → [8] → NULL
// second = [5] → [8] → NULL  --------------> second -> [5] → [3] → [8] → NULL

//a  -> [1] → [3] → [5] → [8] → NULL
//b -> [9] → NULL