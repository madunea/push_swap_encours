/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:00:27 by maduneau          #+#    #+#             */
/*   Updated: 2025/03/21 15:37:57 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    print_stack(t_stack *stack)
{
    t_node *current;

    if (stack == NULL)
		return ;
    current = stack->top;
    while (current)
    {
        printf("%d", current->value);
        current = current->next;
    }
}

void    recup_values(int argc, char **argv, t_stack *stack_a)
{
    char **split_values;
    int value;
    int i;
    
    if (argc == 2)
    {   
        split_values = ft_split(argv[1], ' ');
        i = 0;
        while(split_values[i])
        {
            value = atoi(split_values[i]);  // Convert arg en entier
            add_node(stack_a, init_node(value));  // add node to pile
            i++;
        }
        free_split(split_values);
    }
    else
    {
        i = 1;
        while (i < argc)
        {
            value = atoi(argv[i]);
            add_node(stack_a, init_node(value)); 
            i++; //essayer de le mettre dans la boucle avec i=0
        }
    }
}


int main(int argc, char **argv)
{
    (void)**argv;
    t_stack *stack_a;
    t_stack *stack_b;
    stack_a = init_stack();
    stack_b = init_stack();

    if (argc < 2)
        return (0);
    recup_values(argc, argv, stack_a);
    // assign_index(stack_a);
    if (stack_is_sorted(stack_a) == 1)
    {
        if (stack_a->size <= 5)
        {
            mini_algo(stack_a, stack_b);
        }
        else if (stack_a->size > 5)
        {
            big_algo(stack_a, stack_b);
        }
        printf("stack  a:\n");
        print_stack(stack_a);
        free_stack(stack_a);
        free_stack(stack_b);
    }
    else    
        printf("stack is sorted\n");
    return(0);
}
