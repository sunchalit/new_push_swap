/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:56:54 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:56:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct stack_data
{
    int                 value;
    struct stack_data   *prev;
    struct stack_data   *next;
}   stack;

//sort_1-3.c
stack   *sort_2(stack **s);
stack   *sort_3(stack **s);
stack   *sort(stack **s);

//main.c
void final(stack **a, stack **b);

//utils1.c
void    init_stack(stack **s, char **argv);
int     stack_len(stack *s);
void    fill(stack **s, int number);
stack   *findlast(stack *s);
int     findmiddle(stack *s);

//utils2.c
int     ft_atoi(char *str);
void	*ft_memcpy(void *s1, void *s2, size_t n);

//utils3.c
size_t	count_words(char *s, char c);
size_t	word_length(char *s, char c);
char	*new_str(char *s, size_t n);
char	**finish(char **split, size_t n, char *s, size_t *i);
char	**ft_split(char *s, char c);

//swap.c
void   swap(stack **s);
void    sa(stack **s);
void    sb(stack **s);

//rotate.c
void    rotate(stack **s);
void    ra(stack **s);
void    rb(stack **s);

//reverse_rotate.c
void     reverse_rotate(stack **s);
void    rra(stack **s);
void    rrb(stack **s);

//push.c
void     push(stack **src, stack **dest);
void    pa(stack **a, stack **b);
void    pb(stack **b, stack **a);

//mysort1.c
int     f(stack **a, stack **b);
void   third(stack **a, stack **b);
stack   *first(stack **a, stack **b);

//mysort2.c
void    second(stack **a, stack **b);
void    lessthan_3(stack **a, stack **b, stack *last_b);
void    a_than_middle(stack **a, stack **b);
void    a_less_middle(stack **a, stack **b,stack *last_b);
void    a_less_last_b(stack **a, stack **b);

//error.c
int     error_1(char *str);
int     error_2(stack *s, int number);
void    free_stack(stack **s);
void    free_error(stack **s);


#endif 