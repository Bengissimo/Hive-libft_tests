/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:24:41 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 21:25:35 by bkandemi         ###   ########.fr       */
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
	if (ft_strequ(ft_strncpy(dst1, "Hello world", 10), strncpy(dst2, "Hello world", 10)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	printf("dst1: %s\n[OK]\n", dst1);
	free(dst1);
	free(dst2);
	return (0);
}