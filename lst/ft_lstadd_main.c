/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:49:18 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/06 09:36:22 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

	t_list *previous;
	previous = head;
	
	t_list *new;
	new = ft_lstnew("new", 4);
	ft_lstadd(&head, new);
	if (ft_strequ("new", head->content) != 1 || ft_strequ("I am a list", head->next->content) != 1
	|| head->next != previous || previous->next != NULL)
	{
		printf("new: [KO]\n");
		return (1);
	}	
	t_list *newest;
	newest = ft_lstnew("newest", 7);
	ft_lstadd(&head, newest);
	if (ft_strequ("newest", head->content) != 1 || ft_strequ("I am a list", head->next->next->content) != 1)
	{
		printf("newest: [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	del(&head);
	return (0);
}
