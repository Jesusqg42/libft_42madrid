/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:13:02 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/04/26 22:59:36 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*int main(void)
{
    t_list *node_one, *node_two, *last_node;
    int *num_one, *num_two;

    num_one  = (int *)malloc(sizeof(int));
    num_two = (int *)malloc(sizeof(int));
    if (num_one == NULL || num_two == NULL)
        return (1);
    *num_one = 42;
    *num_two = 24;
    
    node_one = ft_lstnew(num_one);
    node_two = ft_lstnew(num_two);

    node_one->next = node_two;

    last_node = ft_lstlast(node_one);

    printf("%d", *(int *)(last_node->content)); 

    free(num_one);
    free(num_two);
    free(node_one);
    free(node_two);
    return (0);
}*/
