/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:19:33 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/04/12 12:32:30 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	adjust_len(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start < s_len)
	{
		if (s_len - start < len)
			len = s_len - start;
	}
	else
		len = 0;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*string;

	len = adjust_len(s, start, len);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (ft_strlen(s) == 0)
		return (NULL);
	if (string == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			string[j] = s[i];
			j++;
		}
		i++;
	}
	string[j] = '\0';
	return (string);
}
