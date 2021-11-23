/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:52:21 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 11:57:28 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *dst1;
	char *dst2;
	
	dst1 = ft_memalloc(25);
	dst2 = ft_memalloc(25);
	
	if (ft_strequ(ft_memcpy(dst1, "Hello world", 0), memcpy(dst2, "Hello world", 0)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	if (ft_strequ(ft_memcpy(dst1, "Hello world", 5), memcpy(dst2, "Hello world", 5)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	if (ft_strequ(ft_memcpy(dst1, "Hello world", 25), memcpy(dst2, "Hello world", 25)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	printf("dst: %s\n[OK]\n", dst1);
	free(dst1);
	free(dst2);
	return (0);
}
