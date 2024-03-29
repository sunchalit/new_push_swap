/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysort2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:11:00 by marvin            #+#    #+#             */
/*   Updated: 2024/01/23 16:28:46 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_less_last_b(t_stack **a, t_stack **b)
{
	pa(a, b);
	rb(b);
}

void	a_less_middle(t_stack **a, t_stack **b, t_stack *last_b)
{
	int	counter;

	counter = 0;
	while ((*a)->value > last_b->value)
	{
		rrb(b);
		counter++;
		last_b = findlast(*b);
	}
	pa(a, b);
	counter++;
	while (counter != 0)
	{
		rb(b);
		counter--;
	}
}

void	a_than_middle(t_stack **a, t_stack **b)
{
	int	counter;

	counter = 0;
	while ((*a)->value < (*b)->value)
	{
		rb(b);
		counter++;
	}
	pa(a, b);
	while (counter != 0)
	{
		rrb(b);
		counter--;
	}
}

void	lessthan_3(t_stack **a, t_stack **b, t_stack *last_b)
{
	if ((*a)->value <= last_b->value)
	{
		pa(a, b);
		rb(b);
	}
	else if ((*a)->value > last_b->value)
	{
		pa(a, b);
		sb(b);
	}
}

void	second(t_stack **a, t_stack **b)
{
	int		len_b;
	int		middle;
	t_stack	*last_b;

	if ((*b) == NULL || (*a)->value >= (*b)->value)
		pa(a, b);
	else if ((*a)->value < (*b)->value)
	{
		middle = findmiddle(*b);
		last_b = findlast(*b);
		len_b = stack_len(*b);
		if (len_b < 3)
			lessthan_3(a, b, last_b);
		else if ((*a)->value < last_b->value)
			a_less_last_b(a, b);
		else if ((*a)->value >= middle)
			a_than_middle(a, b);
		else if ((*a)->value < middle)
			a_less_middle(a, b, last_b);
	}
}
