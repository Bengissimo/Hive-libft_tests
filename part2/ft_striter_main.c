/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:48:51 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 16:49:45 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	underscore(char *s)
{
	if (!s)
		return ;
	*s = ('_');
}

int main(void)
{
	char *A = ft_memalloc(20);
	ft_memset(A, 'A', 10);
	ft_putendl(A);
	ft_striter(A, &underscore);
	for (int i = 0; i < 10; i++)
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