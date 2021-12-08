/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:40:57 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/06 11:02:46 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	xfn(t_list *lst)
{
	printf("address: %p content: %s content_size: %zu\n", lst, lst->content, lst->content_size);
}

int	main(void)
{
	t_list	*lst;
	t_list	*head;

	lst = ft_lstnew("(1)", 4);
	head  = lst;
	t_list *new;
	new = ft_lstnew("(2)", 4);
	ft_lstadd(&head, new);
	t_list *newest;
	newest = ft_lstnew("(3)", 4);
	ft_lstadd(&head, newest);
	printf("newest:\n");
	ft_lstiter(newest, &xfn);
	printf("newest->next:\n");
	ft_lstiter(newest->next, &xfn);
	printf("newest->next->next:\n");
	ft_lstiter(newest->next->next, &xfn);
	return (0);
}