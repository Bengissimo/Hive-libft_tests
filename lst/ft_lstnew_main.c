/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:46:59 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/06 11:06:53 by bkandemi         ###   ########.fr       */
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
	char *str = "Hello world";

	t_list	*lst;
	lst = ft_lstnew(str, 12);
	if (lst->next != NULL || ft_strequ(lst->content, "Hello world") != 1 || lst->content_size != 12)
	{
		printf("content: 'Hello world' [K0]\n");
		return (1);
	}
	del(&lst);
	lst = ft_lstnew(NULL, 12);
	if (lst->next != NULL || ft_strequ(lst->content, NULL) != 1 || lst->content_size != 0)
	{
		printf("content: NULL [KO]\n");
		return (1);
	}	
	printf("[OK]\n");
	del(&lst);
	return (0);
}
