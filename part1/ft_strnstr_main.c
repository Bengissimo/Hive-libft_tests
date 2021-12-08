/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:26:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 12:15:11 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s1 = "foo foobar baz";

	if (ft_strequ(strnstr(s1, "foobar", 6), ft_strnstr(s1, "foobar", 6)) != 1)
	{
		printf("searching 'foobar' in the first 6 chars of '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strnstr(s1, "foobar", 15), ft_strnstr(s1, "foobar", 15)) != 1)
	{
		printf("searching 'foobar' in the first 15 chars of '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strnstr(s1, "x", 15), ft_strnstr(s1, "x", 15)) != 1)
	{
		printf("searching 'x' in the first 15 chars of '%s'[KO]\n", s1);
		return (1);
	}

	if (ft_strequ(strnstr(s1, "", 15), ft_strnstr(s1, "", 15)) != 1)
	{
		printf("searching '' in the first 15 chars of '%s'[KO]\n", s1);
		return (1);
	}
	if (ft_strequ(strnstr(s1, "z", 15), ft_strnstr(s1, "z", 15)) != 1)
	{
		printf("searching 'z' in the first 15 chars of '%s'[KO]\n", s1);
		return (1);
	}
	
	if (ft_strequ(strnstr(s1, "z", 14), ft_strnstr(s1, "z", 14)) != 1)
	{
		printf("searching 'z' in the first 14 chars of '%s'[KO]\n", s1);
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
