/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:31:55 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 14:34:23 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *new;

	new = ft_strnew(5);

	for (int i = 0; i < 5; i++)
	{
		if (new[i] != '\0')
		{
			printf("%d [KO]\n", i);
			return (1);
		}
	}
	printf("[OK]\n");
	return (0);
}
