/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 22:40:23 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/06 11:08:55 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	t_list *hello(t_list *lst)
{
	t_list	*new;
	if (((char *)lst->content)[0] == 'n')
	{	
		new = ft_lstnew("Hello", 6);
		return (new);
	}
	new = ft_lstnew("xxx", 4);
	return (new);
}

static	void	del(t_list **head)
{
	t_list	*current;
	t_list	*next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
	*head = NULL;
}

static	void	xfn(t_list *lst)
{
	printf("address: %p content: %s content_size: %zu\n", lst, (char *)lst->content, lst->content_size);
}

int	main(void)
{
	t_list *head;
	head = ft_lstnew("I am a list", 12);
	t_list *new;
	new = ft_lstnew("new", 4);
	ft_lstadd(&head, new);
	t_list *newest;
	newest = ft_lstnew("newest", 7);
	ft_lstadd(&head, newest);
	ft_lstiter(head, &xfn);
	t_list *fresh = ft_lstmap(head, &hello);
	ft_lstiter(fresh, &xfn);
	del(&fresh);
	del(&head);
	return (0);
}