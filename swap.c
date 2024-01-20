/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:15 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 17:53:54 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **s)
{
	*s = (*s)->next;
	(*s)->prev->prev = *s;
	(*s)->prev->next = (*s)->next;
	if ((*s)->next)
		(*s)->next->prev = (*s)->prev;
	(*s)->next = (*s)->prev;
	(*s)->prev = NULL;
}

void	sa(t_stack **s)
{
	swap(s);
	write(1, "sa\n", 3);
}

void	sb(t_stack **s)
{
	swap(s);
	write(1, "sb\n", 3);
}
