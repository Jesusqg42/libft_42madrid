/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:19:37 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/04/25 16:40:10 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	ft_space(char c)
{
	return (
		c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r'
	);
}

int	ft_atoi(const char *str)
{
	int				sign;
	int				i;
	long long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && ft_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result < INT_MIN && sign == -1)
			return (0);
		else if (result > INT_MAX && sign == 1)
			return (-1);
	}
	return (sign * result);
}
