/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:06:57 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 14:49:52 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char **array = ft_strsplit("******************0**1**2*3****4*******", '*');
	
	for (int i = 0; i < 5; i++)
	{
		if (ft_atoi(array[i]) != i)
		{
			printf("%d [KO]\n", i);
			return (1);
		}
	}
	printf("[OK]\n");
	return (0);
}
