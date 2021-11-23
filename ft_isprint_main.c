/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:47:26 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/18 11:47:46 by bkandemi         ###   ########.fr       */
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

	for (int i = 32; i <= 126; i++)
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