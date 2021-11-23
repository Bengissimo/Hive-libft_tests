/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:48:40 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 15:19:25 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	underscore_i(unsigned int i, char *s)
{
	if (!s)
		return ;
	if (i % 2 == 0)
		*s = '_';
}

int main(void)
{
	char *A = ft_memalloc(20);
	ft_memset(A, 'A', 10);
	ft_putendl(A);
	ft_striteri(A, &underscore_i);
	for (int i = 0; i < 10; i+=2)
	{
		if(A[i] != '_')
		{
			printf("[KO]\n");
			return (1);
		}
	}
	ft_putendl(A);
	printf("[OK]\n");
	return (0);
}
