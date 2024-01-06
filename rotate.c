/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:10 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:57:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(stack **s)
{
    stack   *last;

    last = findlast(*s);
    last->next = (*s);
    *s = (*s)->next;
    (*s)->prev = NULL;
    last->next->prev = last;
    last->next->next = NULL;

}

void    ra(stack **s)
{
    rotate(s);
    write(1, "ra\n", 3);
}

void    rb(stack **s)
{
    rotate(s);
    write(1, "rb\n", 3);
}
