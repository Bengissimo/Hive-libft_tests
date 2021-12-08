/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:01:41 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/18 22:21:40 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	null_check(char *s, int size)
{
	/* Return if the element is not NULL */
	for (int i = 0; i < size; i++)
	{
		if (s[i] != '\0')
		{
			printf("[%d][KO]\n", i);
			return ;
		}
	}
	printf("[OK]\n");
	return ;
}

int main(void)
{
	char *s1;
	char *s2;
	
	s1 = ft_memalloc(10);
	s2 = ft_memalloc(-1);
	if (s2 == NULL)
		printf("NULL check ok\n");
	null_check(s1, 10);
	free(s1);
	return (0);
}