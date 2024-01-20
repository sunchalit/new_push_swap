/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:10 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 18:25:53 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **s)
{
	t_stack	*last;

	last = findlast(*s);
	last->next = (*s);
	*s = (*s)->next;
	(*s)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	ra(t_stack **s)
{
	rotate(s);
	write(1, "ra\n", 3);
}

void	rb(t_stack **s)
{
	rotate(s);
	write(1, "rb\n", 3);
}
