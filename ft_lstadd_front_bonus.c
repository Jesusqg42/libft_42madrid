/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquiaro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:33:11 by jquiaro-          #+#    #+#             */
/*   Updated: 2024/04/26 21:36:45 by jquiaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	lst[0] = new;
}

/*int main(void)
{
    t_list *head = NULL;
    t_list *new_node;
    
    int *result = (int *)malloc(sizeof(int));
    if (result == NULL)
        return (1);
    *result = 42;
    
    new_node = ft_lstnew(result);
    
    ft_lstadd_front(&head, new_node);
    
    printf("%d", *(int *)(head->content));
    
    free(result);
    free(new_node);
    return (0);
}*/