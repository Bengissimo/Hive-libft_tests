/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:26:21 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 15:57:33 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static void check_print(char *str)
{
	if (str == NULL)
		printf("no c return is NULL\n");
	else
		printf("%s\n", str);
}

int main(void)
{
	char str_c_end[30] = "This string has a c";
	char str_c_start[30] = "c is here at the start";
	char str_c_mid[30] = "look at the c in the middle";
	char str_no_c[30] = "no no no no no no";

	printf("ft_strrchr:\n");
	printf("%s:		", str_c_end);
	check_print(ft_strrchr(str_c_end, 'c'));
	printf("%s:		", str_c_start);
	check_print(ft_strrchr(str_c_start, 'c'));
	printf("%s:	", str_c_mid);
	check_print(ft_strrchr(str_c_mid, 'c'));
	check_print(ft_strrchr(str_no_c, 'c'));
	printf("search for null char:");
	check_print(ft_strrchr(str_c_end, '\0'));
	
	printf("strrchr:\n");
	printf("%s:		", str_c_end);
	check_print(strrchr(str_c_end, 'c'));
	printf("%s:		", str_c_start);
	check_print(strrchr(str_c_start, 'c'));
	printf("%s:	", str_c_mid);
	check_print(strrchr(str_c_mid, 'c'));
	check_print(strrchr(str_no_c, 'c'));
	printf("search for null char:");
	check_print(strrchr(str_c_end, '\0'));


	return (0);
}	