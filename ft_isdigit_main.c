/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:45:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/18 11:46:08 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char ascii[128];
	ft_bzero(ascii, 128);
	for (int i = 0; i < 128; i++)
	{
		ascii[i] = i;
	}

	for (int i = '0'; i <= '9'; i++)
	{
		if (ft_isascii(ascii[i]) != 1)
		{
			printf("[%d][%c][[KO]\n", i, ascii[i]);
			return (1);
		}
	}
	printf("[OK]\n");
	return (0);
}