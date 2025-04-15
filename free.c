/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:11:16 by marieduneau       #+#    #+#             */
/*   Updated: 2025/03/10 14:03:52 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_split(char **split)
{
    int i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

void    free_stack(t_stack *stack)
{
    t_node  *next;
        
    while (stack->top) //tant qu'on n'est pas au noeud NULL après la liste
    {
        next = stack->top->next; //on save le prochain noeud avant de supprimer celui du haut de la pile
        free(stack->top); //supp le noeud du haut de la pile
        stack->top = next; //le nouveau haut est le 2e noeud initial, saved before
    }
    free(stack);
}

