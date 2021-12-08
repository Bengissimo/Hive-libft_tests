/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:59:15 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 12:08:21 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void print_chars(char *str, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("(%c)", str[i]);
	}
	printf("\n");
}

int main(void)
{
	char *str = ft_memalloc(10);
	ft_memset(str, 'b', 10);
	print_chars(str, 10);
	ft_strclr(str);
	for (int i = 0; i < 10; i++)
	{
		if(str[i] != '\0')
		{
			printf("[KO]\n");
			return (1);
		}
	}
	print_chars(str, 10);
	printf("[OK]\n");
	return (0);
}
