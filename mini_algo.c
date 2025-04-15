/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:20:14 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/21 13:34:15 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_two(t_stack *stack_a)
{
    if (!stack_is_sorted(stack_a))
        sa(stack_a);
    return ;
}

void    sort_three(t_stack *stack_a)
{
    
int     first;
int     second;
int     third;

first = stack_a->top->value;
second = stack_a->top->next->value;
third = stack_a->top->next->next->value;

if (first < second && second > third && first < third)
{
    sa(stack_a);
    ra(stack_a);
}
else if (first > second && second < third && first < third)
    sa(stack_a);
else if (first < second && second > third && first > third)
    rra(stack_a);
else if (first > second && second > third && first > third)
{
    sa(stack_a);
    rra(stack_a);
}
else if (first > second && second < third && first > third)
    ra(stack_a);
} 

void    sort_four(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *min;
    int     min_index;
    
    min = find_min(stack_a);
    min_index = find_position(stack_a, min);  
    
    if (min_index == 1)
    {
        sa(stack_a);
    }
    else if (min_index == 2)
    {
        ra(stack_a);
        ra(stack_a);
    }
    if (min_index == 3)
    {
        rra(stack_a);
    }
    pb(stack_a, stack_b); //1er de stack a dans stack b
    sort_three(stack_a);
    pa(stack_a, stack_b); //on renvoie de stack b en haut stack a, à sa place.
}

void    sort_five(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *min;
    int min_index;

    min = find_min(stack_a);
    min_index = find_position(stack_a, min);
    
    if (min_index == 1)
    {
        sa(stack_a);
    }
    else if (min_index == 2)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (min_index == 3)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if (min_index == 4)
        rra(stack_a);
    pb(stack_a, stack_b); //1er de stack a dans stack b
    sort_four(stack_a, stack_b);
    pa(stack_a, stack_b); //on renvoie de stack b en haut stack a, à sa place.  
}

void    mini_algo(t_stack *stack_a, t_stack *stack_b)
{
    if (!stack_a || !stack_a->top)
        return ;
    
    if (stack_is_sorted(stack_a) == 0)
        printf("already sorted all good!\n");
    else if (stack_is_sorted(stack_a) == 1)
    {   
        if (stack_a->size == 2)
            sort_two(stack_a);
        else if (stack_a->size == 3)
            sort_three(stack_a);
        else if (stack_a->size == 4)
        {
            sort_four(stack_a, stack_b);
        }
        else if (stack_a->size == 5)
        {
            sort_five(stack_a, stack_b);
        }
    }
}