/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:06:41 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 09:37:56 by bkandemi         ###   ########.fr       */
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

int main(void)
{
	char *dup;

	char *str = "Hello world";
	dup = ft_strdup(str);
    check_print(dup);
    ft_memdel((void **)&dup);
	if (dup != NULL)
	{
		printf("[KO]\n");
		return (1);
	}
	check_print(dup);
    return (0);
}
