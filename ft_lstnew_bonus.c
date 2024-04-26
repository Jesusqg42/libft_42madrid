/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:17:28 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/04/26 20:31:45 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*int main(void)
{
	t_list *result;
	int *num;

	num = (int *)malloc(sizeof(int));
	if (num == NULL)
		return (1);
	*num = 42;
	result = ft_lstnew(num);

	printf("%d", *(int *)(result->content));

	free(result);
	return (0);
}*/