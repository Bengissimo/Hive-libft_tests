/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:09:09 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 22:46:15 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	if (tolower('A') != ft_tolower('A'))
	{
		printf("'A' [KO]\n");
		return (1);
	}
	if (tolower('@') != ft_tolower('@'))
	{
		printf("'@' [KO]\n");
		return (1);
	}
	if (tolower('[') != ft_tolower('['))
	{
		printf("'[' [KO]\n");
		return (1);
	}
	if (tolower(EOF) != ft_tolower(EOF))
	{
		printf("EOF [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
