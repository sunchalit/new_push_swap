/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:25 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:57:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_words(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

size_t	word_length(char *s, char c)
{
	size_t	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

char	*new_str(char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(n + 1);
	if (str)
	{
		ft_memcpy(str, s, n);
		str[n] = '\0';
	}
	return (str);
}

char	**finish(char **split, size_t n, char *s, size_t *i)
{
	split[*i] = new_str(s, n);
	if (!split[*i])
	{
		while (*i > 0)
			free(split[--(*i)]);
		free(split);
		return (NULL);
	}
	(*i)++;
	return (split);
}

char	**ft_split(char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	n;

	i = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		n = word_length(s, c);
		if (n)
		{
			split = finish(split, n, s, &i);
			if (!split)
				return (NULL);
		}
		s += n;
	}
	split[i] = NULL;
	return (split);
}
