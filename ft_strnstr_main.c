/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:26:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/22 21:41:02 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*static void check_print(char *str)
{
	if (str == NULL)
		printf("not found, NULL returned\n");
	else
		printf("%s\n", str);
}*/

int main(void)
{
	char *s1 = "foofoobar";
	char *s2 = "foobar";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	printf("i1: %s", i1);
	printf("i2: %s", i2);
	
	/*char *haystack = "Foo Bar Baz";
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
	check_print(ptr1);*/

	return (0);
}
