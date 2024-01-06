/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_1-3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:47:43 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:47:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack   *sort(stack **s)
{
    int a;
    int b;
    int c;

    a = (*s)->value; 
    b = (*s)->next->value;
    c = (*s)->next->next->value;
    if (a > b && b < c && a < c)
        sa(s);
    else if (a < b && b > c && a > c)
        rra(s);
    else if (a > b && a > c && b < c)
        ra(s);
    return (*s);
}
stack   *sort_2(stack **s)
{ 
    if ((*s)->value > (*s)->next->value)
    {
        sa(s);
    }
    return (*s);
}

stack *sort_3(stack **s)
{
    int a;
    int b;
    int c;

    a = (*s)->value;
    b = (*s)->next->value;
    c = (*s)->next->next->value;

    if (a > b && a > c && b > c)
    {
        sa(s);
        rra(s);
    }
    else if (a < b && a < c && b > c)
    {
        sa(s);
        ra(s);
    }
    else 
        sort(s);
    return (*s);
}