/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:16:57 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 15:17:01 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("1:	(%s) -> (%s)\n", "Hello world", ft_strtrim("Hello world"));
	printf("2:	(%s) -> (%s)\n", " Hello world", ft_strtrim(" Hello world"));
	printf("3:	(%s) -> (%s)\n", "       Hello world", ft_strtrim("       Hello world"));
	printf("4:	(%s) -> (%s)\n", " Hello world ", ft_strtrim(" Hello world "));
	printf("5:	(%s) -> (%s)\n", "  \t Hello world  \t ", ft_strtrim("  \t Hello world  \t "));
	printf("6:	(%s) -> (%s)\n", "	Hello world", ft_strtrim("	Hello world"));
	printf("7:	(%s) -> (%s)\n", "\n\t Hello\nworld \t\n", ft_strtrim("\n\t Hello\nworld \t\n"));
	printf("8:	(%s) -> (%s)\n", "\n\t      \t\n", ft_strtrim("\n\t      \t\n"));
	return (0);
}
