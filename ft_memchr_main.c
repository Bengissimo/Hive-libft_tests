/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:39:18 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/12 22:25:16 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static void check_print(char *str)
{
	if (str == NULL)
		printf("no c so str is NULL\n");
	else
		printf("%s\n", str);
}

int main(void)
{
	char str_c_end[30] = "This string has a c";
	char str_c_start[30] = "c is here at the start";
	char str_c_mid[30] = "look at the c in the middle";
	char str_no_c[30] = "no no no no no no";

	ft_putstr("ft_memchr:\n");
	check_print(ft_memchr(str_c_end, 'c', ft_strlen(str_c_end)));
	check_print(ft_memchr(str_c_start, 'c', ft_strlen(str_c_start)));
	check_print(ft_memchr(str_c_mid, 'c', ft_strlen(str_c_mid)));
	check_print(ft_memchr(str_no_c, 'c', ft_strlen(str_no_c)));
	
	ft_putstr("memchr:\n");
	check_print(memchr(str_c_end, 'c', ft_strlen(str_c_end)));
	check_print(memchr(str_c_start, 'c', ft_strlen(str_c_start)));
	check_print(memchr(str_c_mid, 'c', ft_strlen(str_c_mid)));
	check_print(memchr(str_no_c, 'c', ft_strlen(str_no_c)));

	return (0);
}	