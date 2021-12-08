/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:01:51 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/18 14:01:57 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int array[7] = {-2147483648, -0, 0, +0, -5859, +   5859, 2147483647};
	const char *s[7] = {"-2147483648", "0", "0", "0", "-5859", "5859", "2147483647"};
	
	for (int i = 0; i < 7; i++)
	{
		if (ft_strequ((const char *)ft_itoa(array[i]), s[i]) != 1)
		{
			printf("%d [KO]\n", array[i]);
			return (1);
		}
		ft_putendl(ft_itoa(array[i]));
	}
	printf("[OK]\n");
	return (0);
}
