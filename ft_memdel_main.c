/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:06:41 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/16 11:06:43 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void check_print(char **str)
{
	if (*str == NULL)
		printf("no c return is NULL\n");
	else
    {
        printf("%s\n", str[0]);
        printf("%s\n", str[1]);
    }
}

int main(void)
{
    char *ptr[2];
    char str[10] = "abc";
    char str2[10] = "def";
    ptr[0] = str;
    ptr[1] = str2;

    check_print(ptr);
    ft_memdel((void **)ptr);
    check_print(ptr);
    return (0);
}
