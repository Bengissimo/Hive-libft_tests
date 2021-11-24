/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:05:37 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 22:36:10 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void strnequ_test(char const *s1, char const *s2, size_t n, int expected)
{
	if (ft_strnequ(s1, s2, n) != expected)
	{	
		printf("comparing %zu chars of '%s' vs '%s' should return %d\n", n, s1, s2, expected);
	}
	else
		printf("[OK] ");	
}

int main(void)
{
	strnequ_test("abc", "abc", 1, 1);
	strnequ_test("abc", "abc", 2, 1);
	strnequ_test("abc", "abc", 3, 1);
	strnequ_test("abc", "abc", 4, 1);
	strnequ_test("abc", "abc", 25, 1);
	strnequ_test("abc", "", 1, 0);
	strnequ_test("abc", "", 100, 0);
	strnequ_test("abc", "a", 1, 1);
	strnequ_test("abc", "a", 2, 0);
	strnequ_test("abc", "a", 10, 0);
	strnequ_test("abc", "ab", 1, 1);
	strnequ_test("abc", "ab", 2, 1);
	strnequ_test("abc", "ab", 3, 0);
	strnequ_test("abc", "abb", 1, 1);
	strnequ_test("abc", "abb", 2, 1);
	strnequ_test("abc", "abb", 3, 0);
	strnequ_test("abc", "abcabc", 1, 1);
	strnequ_test("abc", "abcabc", 2, 1);
	strnequ_test("abc", "abcabc", 3, 1);
	strnequ_test("abc", "abcabc", 4, 0);
	strnequ_test("abc", "abcabc", 10, 0);
	strnequ_test("abc", NULL, 3, 0);
	strnequ_test(NULL, "abc", 3, 0);
	strnequ_test(NULL, NULL, 1 , 1);
	strnequ_test("", "" , 0, 1);
	strnequ_test("", "" , 5, 1);
	printf("\n");
	return (0);
}
