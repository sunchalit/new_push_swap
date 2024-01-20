/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:56:54 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 18:23:03 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack_data
{
	int					value;
	struct s_stack_data	*prev;
	struct s_stack_data	*next;
}	t_stack;

//sort_1-3.c
t_stack	*sort_2(t_stack **s);
t_stack	*sort_3(t_stack **s);
t_stack	*sort(t_stack **s);

//main.c
void	final(t_stack **a, t_stack **b);

//utils1.c
void	init_stack(t_stack **s, char **argv);
int		stack_len(t_stack *s);
void	fill(t_stack **s, int number);
t_stack	*findlast(t_stack *s);
int		findmiddle(t_stack *s);

//utils2.c
int		ft_atoi(char *str);
void	*ft_memcpy(void *s1, void *s2, size_t n);

//utils3.c
size_t	count_words(char *s, char c);
size_t	word_length(char *s, char c);
char	*new_str(char *s, size_t n);
char	**finish(char **split, size_t n, char *s, size_t *i);
char	**ft_split(char *s, char c);

//swap.c
void	swap(t_stack **s);
void	sa(t_stack **s);
void	sb(t_stack **s);

//rotate.c
void	rotate(t_stack **s);
void	ra(t_stack **s);
void	rb(t_stack **s);

//reverse_rotate.c
void	reverse_rotate(t_stack **s);
void	rra(t_stack **s);
void	rrb(t_stack **s);

//push.c
void	push(t_stack **src, t_stack **dest);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);

//mysort1.c
int		f(t_stack **a, t_stack **b);
void	third(t_stack **a, t_stack **b);
t_stack	*first(t_stack **a, t_stack **b);

//mysort2.c
void	second(t_stack **a, t_stack **b);
void	lessthan_3(t_stack **a, t_stack **b, t_stack *last_b);
void	a_than_middle(t_stack **a, t_stack **b);
void	a_less_middle(t_stack **a, t_stack **b, t_stack *last_b);
void	a_less_last_b(t_stack **a, t_stack **b);

//error.c
int		error_1(char *str);
int		error_2(t_stack *s, int number);
void	free_stack(t_stack **s);
void	free_error(t_stack **s);

#endif 
