/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:36:13 by cnarkcha          #+#    #+#             */
/*   Updated: 2024/01/12 18:36:16 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_1(char *str)
{
	if (str == NULL || *str == '\0')
		return (1);
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

int	error_2(t_stack *s, int number)
{
	if (!s)
		return (0);
	while (s)
	{
		if (s->value == number)
			return (1);
		s = s->next;
	}
	return (0);
}

void	free_stack(t_stack **s)
{
	t_stack	*temp;
	while (*s != NULL)
	{
		temp = *s;
		*s = (*s)->next;
		free(temp);
	}
}

void	free_error(t_stack **s)
{
	free_stack(s);
	write(1, "error\n", 6);
	exit(1);
}
