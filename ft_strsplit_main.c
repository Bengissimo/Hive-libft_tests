/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:06:57 by bkandemi          #+#    #+#             */
/*   Updated: 2021/12/06 22:40:57 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void free_array(char **array, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

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
	free_array(array, 5);
	
	//testing alelievr libft-unit-test crashed one
	char **array2 = ft_strsplit("      split       this for   me  !       ", ' ');
	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
	for (int i = 0; i < 6; i++)
	{
		printf("%s\n", array2[i]);
		printf("ft_strequ %d\n", ft_strequ(array2[i], expected[i]));
	}
	return (0);
}
