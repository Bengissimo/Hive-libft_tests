/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:43:09 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 21:46:40 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void check_print(char *str)
{
	if (str == NULL)
		printf("NULL\n");
	else
    {
        printf("%s\n", str);
    }
}

int	main(void)
{
	char *str;
	str = ft_strdup("Hello world");
	printf("Before strdel: ");
	check_print(str);
	ft_strdel(&str);
	if (str != NULL)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("After strdel: ");
	check_print(str);
	printf("[OK]\n");
	return (0);
}