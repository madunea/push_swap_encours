/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:00 by marieduneau       #+#    #+#             */
/*   Updated: 2025/02/22 22:40:07 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    reverse_rotate(t_stack *stack)
{
    t_node  *last;
    t_node  *before_last;
    
    if (!stack || !stack->top || !stack->top->next)
        return ;
    
    before_last = NULL; //on coupe le lien entre before last et last.
    last = stack->top; //on se positionne sur la stack pour descendre.
    
    while (last->next)
    {
        before_last = last; //before_last prend la valeur du nœud actuel
        last = last->next; //last avance d’un cran vers le nœud suivant.
    }
    
    before_last->next = NULL; // L’avant-dernier devient le dernier
    last->next = stack->top; // L’ancien dernier devient le premier
    stack->top = last; // On met à jour le top
}

void    rra(t_stack *stack_a)
{
    reverse_rotate(stack_a);
    ft_putstr("rra\n");
}

void    rrb(t_stack *stack_b)
{
    reverse_rotate(stack_b);
    ft_putstr("rrb\n");
}

void    rrr(t_stack *stack_a, t_stack *stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putstr("rrr\n");
}


// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

// rrr : rra and rrb at the same time.