/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:27:01 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 12:17:02 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s1 = "foo foobar baz";

	if (ft_strequ(strstr(s1, "foobar"), ft_strstr(s1, "foobar")) != 1)
	{
		printf("searching 'foobar' in '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strstr(s1, "foo"), ft_strstr(s1, "foo")) != 1)
	{
		printf("searching 'foo' in '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strstr(s1, "f"), ft_strstr(s1, "f")) != 1)
	{
		printf("searching 'f' in '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strstr(s1, "x"), ft_strstr(s1, "x")) != 1)
	{
		printf("searching 'x' in '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strstr(s1, ""), ft_strstr(s1, "")) != 1)
	{
		printf("searching '' in '%s'[KO]\n", s1);
		return (1);
	}
	if (ft_strequ(strstr(s1, "z"), ft_strstr(s1, "z")) != 1)
	{
		printf("searching 'z' in '%s'[KO]\n", s1);
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
