/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:12:17 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 21:22:36 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void test_bzero(char *s1, char *s2)
{
	for (int i = 0; i <=10; i+=5)
	{
		ft_bzero(s1, 10);
		bzero(s2, 10);
		if (ft_strnequ(s1, s2, i) != 1)
		{	
			printf("%d [KO]\n", i);
			return ;
		}	
	}
	printf("[OK]\n");
}

int		main(void)
{
	char *ft_s;
	char *s;
	ft_s = ft_memalloc(10);
	ft_s = ft_memset(ft_s, 'a', 10);
	s = ft_memalloc(10);
	s = ft_memset(s, 'b', 10);
	test_bzero(ft_s, s);
	return (0);
}
