/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:56:59 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/05 16:46:45 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	xdel(void *p, size_t n)
{
	printf("is lst NULL in the next line? string: %s, size: %zu\n", (char *)p, n);
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

int	 main(void)
{
	char *str = "Hello world";

	t_list	*lst;
	lst = ft_lstnew(str, 12);
	ft_lstdelone(&lst, &xdel);
	if (lst != NULL)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("lst is NULL [OK]\n");
	del(&lst);
	return (0);
}
