/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:44:02 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 16:09:27 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *hello = "Hello";
	char *world = "world";
	char *space = " ";
	char *empty = "";
	char *joined = ft_strjoin(hello, space);

	if (ft_strjoin(hello, NULL) != NULL || ft_strjoin(NULL, hello) != NULL)
	{
		printf("not protected\n");
	}
	if (ft_strequ(joined, "Hello ") != 1)
	{
		printf("Hello + space[KO]\n");
		return (1);
	}
	joined = ft_strjoin(joined, world);
	if (ft_strequ(joined, "Hello world") != 1)
	{
		printf("Hello + world[KO]\n");
		return (1);
	}
	joined = ft_strjoin(joined, empty);
	if (ft_strequ(joined, "Hello world") != 1)
	{
		printf("Hello world + empty[KO]\n");
		return (1);
	}
	ft_putendl(joined);
	ft_putendl("[OK]");
	return (0);
}
