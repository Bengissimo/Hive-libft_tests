/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:26:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/16 10:26:48 by bkandemi         ###   ########.fr       */
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

	printf("ft_strnstr:	");
	ptr1 = ft_strnstr(haystack, "x", 11);
	check_print(ptr1);
	
	printf("strnstr:	");
	ptr1 = strnstr(haystack, "x", 11);
	check_print(ptr1);

	printf("ft_strnstr:	");
	ptr1 = ft_strnstr(haystack, "", 11);
	check_print(ptr1);

	printf("strnstr:	");
	ptr1 = strnstr(haystack, "", 11);
	check_print(ptr1);

	printf("ft_strnstr:	");
	ptr1 = ft_strnstr(haystack, "z", 4);
	check_print(ptr1);

	printf("strnstr:	");
	ptr1 = strnstr(haystack, "z", 4);
	check_print(ptr1);

	printf("ft_strnstr:	");
	ptr1 = ft_strnstr(haystack, "z", 11);
	check_print(ptr1);

	printf("strnstr:	");
	ptr1 = strnstr(haystack, "z", 11);
	check_print(ptr1);

	printf("ft_strnstr:	");
	ptr1 = ft_strnstr(haystack, "ox", 5);
	check_print(ptr1);

	printf("strnstr:	");
	ptr1 = strnstr(haystack, "ox", 5);
	check_print(ptr1);

	return (0);
}
