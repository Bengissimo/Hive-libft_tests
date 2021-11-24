/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:08:39 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 22:49:07 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"


int main(void)
{
	if (toupper('a') != ft_toupper('a'))
	{
		printf("'a' [KO]\n");
		return (1);
	}
	if (toupper('`') != ft_toupper('`'))
	{
		printf("'`' [KO]\n");
		return (1);
	}
	if (toupper('{') != ft_toupper('{'))
	{
		printf("'{' [KO]\n");
		return (1);
	}
	if (toupper(EOF) != ft_toupper(EOF))
	{
		printf("EOF [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
