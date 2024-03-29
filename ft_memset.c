/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:49:45 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/03/21 17:56:02 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*value_mod;

	value_mod = (char *)b;
	i = 0;
	while (i < len)
	{
		value_mod[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
