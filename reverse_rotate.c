/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:05 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:57:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void reverse_rotate(stack **s)
{
    stack   *last;

    last = findlast(*s);
    last->prev->next = NULL;
    last->next = (*s);
    last->prev = NULL;
    (*s) = last;
    last->next->prev = last;
}

void    rra(stack **s)
{
    reverse_rotate(s);
    write(1, "rra\n", 4);
}

void    rrb(stack **s)
{
    reverse_rotate(s);
    write(1, "rrb\n", 4);
}
