/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:49:40 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 20:58:01 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	fn(char c)
{
	if (c == 'A')
		return ('Z');
	return ('A');	
}

int main(void)
{
	char *A;
	char *new;

	A = ft_memalloc(20);
	ft_memset(A, 'A', 10);
	printf("A:	%s\n", A);
	new = ft_strmap(A, &fn);
	for (int i = 0; i < 10; i++)
	{
		if(new[i] != 'Z')
		{
			printf("[KO]\n");
			return (1);
		}
	}
	printf("new:	%s\nOK\n", new);
	return (0);
}
