/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:02 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 18:14:10 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(stack **src, stack **dest)
{
	stack	*push;

	push = (*src);
	(*src) = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push->prev = NULL;
	if (!*dest)
	{
		(*dest) = push;
		(*dest)->next = NULL;
	}
	else
	{
		push->next = (*dest);
		push->next->prev = push;
		(*dest) = push;
	}
}

void	pa(stack **a, stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(stack **b, stack **a)
{
	push(b, a);
	write(1, "pb\n", 3);
}
