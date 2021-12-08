/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:07:31 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/18 15:41:32 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int main(void)
{
	char *dst;
	char *src;

	dst = ft_memalloc(30);
	src = "Hello world.";
	
	if (dst + 6 != ft_memccpy(dst, src, ' ', 8))
	{
		printf("[KO]\n");
		return (1);
	}
	if (ft_strequ(dst, "Hello ") == 1)
		printf("[OK]\n");

	return (0);
}
