/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:24:59 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/04/26 21:55:50 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node_len;

	node_len = 0;
	while (lst)
	{
		lst = lst -> next;
		node_len++;
	}
	return (node_len);
}

/*int main(void)
{
	t_list *head = NULL;
	t_list *new_node;
	int *num;

	num = (int *)malloc(sizeof(int));
	if (num == NULL)
		return (1);
	*num = 42;
	
	new_node = ft_lstnew(num);
	ft_lstadd_front(&head, new_node);

	printf("%d", ft_lstsize(head));
	
	free(num);
	free(new_node);
    return (0);
}*/