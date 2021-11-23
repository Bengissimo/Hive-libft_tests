/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:05:37 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 13:36:19 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void strnequ_test(char const *s1, char const *s2)
{
	for (int i = 1; i < 8; i++)
	{
		if (ft_strnequ(s1, s2, i) == 1)
		{	
			printf("%d chars of %s vs %s equal\n", i, s1, s2);
		}
		else
			printf("%d chars of %s vs %s NOT equal\n", i, s1, s2);
	}
}

int main(void)
{
	strnequ_test("abc", "abc");
	strnequ_test("abc", "");
	strnequ_test("abc", "a");
	strnequ_test("abc", "ab");
	strnequ_test("abc", "abb");
	strnequ_test("abc", "abcabc");
	strnequ_test("abc", NULL);
	strnequ_test(NULL, NULL);
	return (0);
}

