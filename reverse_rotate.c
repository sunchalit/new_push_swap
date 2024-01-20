/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:05 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 18:24:26 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **s)
{
	t_stack	*last;

	last = findlast(*s);
	last->prev->next = NULL;
	last->next = (*s);
	last->prev = NULL;
	(*s) = last;
	last->next->prev = last;
}

void	rra(t_stack **s)
{
	reverse_rotate(s);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **s)
{
	reverse_rotate(s);
	write(1, "rrb\n", 4);
}
