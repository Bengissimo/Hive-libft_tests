/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:57:51 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 10:15:42 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	char *b1;
	char *b2;
	
	b1 = ft_memalloc(10);
	b2 = ft_memalloc(10);
	printf("Before:\n");
	printf("b1:	");
	print_chars(b1, 10);
	printf("b2:	");
	print_chars(b2, 10);
	if (ft_strequ(ft_memset(b1, 'b', 10), memset(b2, 'b', 10)) != 1)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("After:\n");
	printf("ft_memset:	");
	print_chars(b1, 10);
	printf("memset:		");
	print_chars(b2, 10);
	printf("[OK]\n");
	return (0);
}
