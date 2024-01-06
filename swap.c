/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:15 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:57:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(stack **s) //Define a function that swaps the positions of the top node and second node of a stack
{
	*s = (*s)->next;
    (*s)->prev->prev = *s;
    (*s)->prev->next = (*s)->next;
    if ((*s)->next)
        (*s)->next->prev = (*s)->prev;
    (*s)->next = (*s)->prev;
    (*s)->prev = NULL; 
}

void    sa(stack **s)
{
    swap(s);
    write(1, "sa\n", 3);
}

void    sb(stack **s)
{
    swap(s);
    write(1, "sb\n", 3);
}