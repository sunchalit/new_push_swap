/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:36:52 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:36:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int f(stack **a, stack **b)
{
    stack *last_a;
    int     last_3;

    last_3 = 3;
    last_a = findlast(*a);
    if ((*b)->value > last_a->value)
    {
        pb(b, a);
    }
    else if ((*b)->value <= last_a->value)
    {
        rra(a);
        pb(b, a);
        last_3--; 
    }
    return (last_3);
}

void third(stack **a, stack **b)
{
    stack *last_a;
    int last_3;
    int len_b;

    len_b = stack_len(*b);
    last_3 = 3;
    last_a = findlast(*a);
    while (len_b != 0)
    {
        if ((*b)->value > last_a->value)
            pb(b, a);
        else if ((*b)->value <= last_a->value)
        {
            rra(a);
            pb(b, a);
            last_3--;
            last_a = findlast(*a);
        }
        len_b = stack_len(*b);
    }
    while (last_3 > 0)
    {
        rra(a);
        last_3--;
    }
}

stack   *first(stack **a, stack **b)
{
    stack   *last;
    int     len_a;

    last = findlast(*a);
    len_a = stack_len(*a);
    while (len_a > 3)
    {
        if (last->value == (*a)->value)
        {
            second(a, b);
            last = findlast(*a);
        }
        else if (last->value < (*a)->value)
        {
            second(a, b);
        }
        else if (last->value > (*a)->value)
            ra(a);
        len_a = stack_len(*a);
    }
    sort_3(a);
    third(a, b);
    return (*a);
}