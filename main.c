/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:19:26 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:19:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void final(stack **a, stack **b)
{
    if (stack_len(*a) == 2)
        sort_2(a);
    else if (stack_len(*a) == 3)
        sort_3(a);
    else if (stack_len(*a) > 3)
        first(a, b);
    while (*a != NULL)
    {
        printf("%d\n", (*a)->value);
        *a = (*a)->next;
    }
    while (*b != NULL)
    {
        printf("b is %d\n", (*b)->value);
        *b = (*b)->next;
    }
}

int main(int argc, char *argv[])
{
    stack   *a;
    stack   *b;
    
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
