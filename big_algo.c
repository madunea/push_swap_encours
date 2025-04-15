/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:15:18 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/25 15:11:14 by maduneau         ###   ########.fr       */
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
    printf("\nmax: %d \n\n", max);
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
    
    printf("\nbits: %d \n\n", bits);

    return (bits);
}

void    radix_sort(t_stack *stack_a, t_stack *stack_b)
{
    int max_bits;
    int i;
    int bit;
    // t_node *current;
    int max;
    
    max = find_max_int(stack_a);
    max_bits = compute_max_bits(stack_a);
    bit = 0;
    
    printf("\nmax bits: %d \n\n", max_bits);
    printf("\n BEFORE Stack a: ");
    print_stack(stack_a);
    printf("\n Stack b: ");
    print_stack(stack_b);
    
    // -----------------------current = stack_a->top;
    while (bit < max_bits)
    {
        i = 0;
        while (i <= max)
        {
            printf("\n----------------");
            printf("\n\n Stack a: ");
            print_stack(stack_a);
            printf("\n Stack b: ");
            print_stack(stack_b);
            
            printf("\n Stack_a->size :%d\n", stack_a->size);
            printf("\ni : %d\n", i);
            printf("bit : %d\n\n", bit);
            
            if ((current >> bit) & 1)
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
