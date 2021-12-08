/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:37:15 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/06 10:14:10 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	xdel(void *p, size_t n)
{
	printf("is the list NULL at the end? string: %s, size: %zu\n", (char *)p, n);
	free(p);
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
	ft_lstdel(&newest, &xdel);
	if (newest != NULL)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("NULL [OK]\n");
	del(&newest);
	return (0);
}
