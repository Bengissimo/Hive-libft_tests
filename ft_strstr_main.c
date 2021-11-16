/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:27:01 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 21:42:02 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void check_print(char *str)
{
	if (str == NULL)
		printf("not found, NULL returned\n");
	else
		printf("%s\n", str);
}

int main(void)
{
	char *haystack = "Foo Bar Baz";
	char *ptr1;

	printf("ft_strstr:	");
	ptr1 = ft_strstr(haystack, "x");
	check_print(ptr1);
	
	printf("strstr:		");
	ptr1 = strstr(haystack, "x");
	check_print(ptr1);

	printf("ft_strstr:	");
	ptr1 = ft_strstr(haystack, "");
	check_print(ptr1);

	printf("strstr:		");
	ptr1 = strstr(haystack, "");
	check_print(ptr1);

	printf("ft_strstr:	");
	ptr1 = ft_strstr(haystack, "z");
	check_print(ptr1);

	printf("strstr:		");
	ptr1 = strstr(haystack, "z");
	check_print(ptr1);

	printf("ft_strstr:	");
	ptr1 = ft_strstr(haystack, "oo");
	check_print(ptr1);

	printf("strstr:		");
	ptr1 = strstr(haystack, "oo");
	check_print(ptr1);

	printf("ft_strstr:	");
	ptr1 = ft_strstr(haystack, "ox");
	check_print(ptr1);

	printf("strstr:		");
	ptr1 = strstr(haystack, "ox");
	check_print(ptr1);

	return (0);
}