/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:19:26 by marvin            #+#    #+#             */
/*   Updated: 2024/01/27 10:57:05 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final(t_stack **a, t_stack **b)
{
	if (stack_len(*a) == 2)
		sort_2(a);
	else if (stack_len(*a) == 3)
		sort_3(a);
	else if (stack_len(*a) > 3)
		first(a, b);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		init_stack(&a, argv);
		final(&a, &b);
	}
	else
	{
		init_stack(&a, argv + 1);
		final(&a, &b);
	}
	free_stack(&a);
	return (0);
}
