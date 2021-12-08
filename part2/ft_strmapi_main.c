/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:58:37 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 21:17:40 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	fn(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	return ('0');	
}

int main(void)
{
	char *A;
	char *new;

	A = ft_memalloc(20);
	ft_memset(A, 'A', 10);
	printf("A:	%s\n", A);
	new = ft_strmapi(A, &fn);
	for (int i = 0; i < 10; i+=2)
	{
		if(new[i] != 'A')
		{
			printf("[KO]\n");
			return (1);
		}
	}
	printf("new:	%s\nOK\n", new);
	return (0);
}
