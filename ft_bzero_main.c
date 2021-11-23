/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:12:17 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 10:07:31 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	null_check(char *s, int size)
{
	/* Returns TRUE if the element is NULL */
	for (int i = 0; i < size; i++)
	{
		printf("%d ", s[i] == '\0');
	}
	printf("\n");
}

int		main(void)
{
	char *s1;
	s1 = ft_memalloc(10);
	for (int i = 0; i < 10; i++)
	{
		s1[i] = 'a';
	}
	printf("Before ft_bzero:		");
	null_check(s1, 10);

	printf("After ft_bzero (n = 0):		");
	ft_bzero(s1, 0);
	null_check(s1, 10);

	printf("After ft_bzero (n = 5):		");
	ft_bzero(s1, 5);
	null_check(s1, 10);

	printf("After ft_bzero (n = 10):	");
	ft_bzero(s1, 10);
	null_check(s1, 10);
}
