/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:57:22 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 14:57:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	sign;

	index = 0;
	result = 0;
	sign = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			sign = sign * (-1);
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - 48);
		index++;
	}
	return (result * sign);
}

void	*ft_memcpy(void *s1, void *s2, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	index = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	return (dest);
}
