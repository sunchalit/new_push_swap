/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:56:39 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 17:51:47 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *s)
{
	int		size;
	t_stack	*current;

	size = 0;
	current = s;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

void	fill(t_stack **s, int number)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		free_error(s);
	new->value = number;
	new->next = *s;
	new->prev = NULL;
	if ((*s) != NULL)
		(*s)->prev = new;
	*s = new;
}

void	init_stack(t_stack **s, char **argv)
{
	int	number;
	int	i;

	i = 0;
	while (argv[i])
	{
		if (error_1(argv[i]))
			free_error(s);
		number = ft_atoi(argv[i]);
		if (error_2(*s, number))
			free_error(s);
		fill(s, number);
		i++;
	}
}

t_stack	*findlast(t_stack *s)
{
	while (s->next)
		s = s->next;
	return (s);
}

int	findmiddle(t_stack *s)
{
	int	len;
	int	middle;

	len = stack_len(s);
	middle = len / 2;
	while (middle != 0)
	{
		s = s->next;
		middle--;
	}
	return (s->value);
}
