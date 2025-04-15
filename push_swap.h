/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:28:10 by maduneau          #+#    #+#             */
/*   Updated: 2025/03/21 14:51:08 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
# include <limits.h>
# include <stddef.h>

typedef struct s_node
{
    int index;
    int value;
    int move_cost;
    struct s_node *next;
} t_node;

typedef struct s_stack
{
    int size;
    t_node *top;
} t_stack;

// init
t_node *init_node(int value);
void add_node(t_stack *stack, t_node *node);
t_stack *init_stack(void);
void print_stack(t_stack *stack);

// parsing
//  int	ft_isdigit(char c);
//  int data_is_digit(const char *data);

// operations
// swap
void swap(t_stack *stack);
void sa(t_stack *stack_a);
void sb(t_stack *stack_b);
void ss(t_stack *stack_a, t_stack *stack_b);
// push
//  void    push(t_stack *stack);
void pa(t_stack *stack_a, t_stack *stack_b);
void pb(t_stack *stack_a, t_stack *stack_b);
// rotate
void ra(t_stack *stack_a);
void rb(t_stack *stack_b);
void rr(t_stack *stack_a, t_stack *stack_b);
// reverse rotate
void rra(t_stack *stack_a);
void rrb(t_stack *stack_b);
void rrr(t_stack *stack_a, t_stack *stack_b);

// algo
// mini algo
int stack_is_sorted(t_stack *stack_a);
void sort_two(t_stack *stack_a);
void sort_three(t_stack *stack_a);
void sort_four(t_stack *stack_a, t_stack *stack_b);
void sort_five(t_stack *stack_a, t_stack *stack_b);
void mini_algo(t_stack *stack_a, t_stack *stack_b);
// algo_utils
t_node *find_min(t_stack *stack_a);
t_node *find_max(t_stack *stack_a);
int find_position(t_stack *stack_a, t_node *target);

// big algo
// algo
int     find_max_int(t_stack *stack_a);
int     compute_max_bits(t_stack *stack_a);
void    radix_sort(t_stack *stack_a, t_stack *stack_b);
void	big_algo(t_stack *stack_a, t_stack *stack_b);

//utils
// int     only_extremes_left(t_stack *stack_a, int Q1, int Q4);
// void    sort_extremes(t_stack *stack_a, t_stack *stack_b, int Q1, int Q4);
// int      get_median(t_stack *stack);
void    assign_index(t_stack *stack_a);
// //op
// void	rotate_to_position(t_stack *stack, int position, int print_stack_a);
// void	r_rotate_to_position(t_stack *stack, int position, int print_stack_a);

//free
void    free_stack(t_stack *stack);
void    free_split(char **split);

//cost
void find_move_cost(t_stack *stack);
t_node    *find_next_index(t_stack *stack, t_node *target_b, int min_index_diff);
t_node	*find_cheapest(t_stack *stack);
void    final_cost(t_stack *stack_a, t_stack *stack_b);

#endif