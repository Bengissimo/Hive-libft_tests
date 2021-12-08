/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:31:22 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 21:21:15 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "Hello";

	if(ft_strequ(ft_strncat(s1, " world", 0), strncat(s2, " world", 0)) != 1)
	{
		printf("1-[KO]\n");
		return (1);
	}
	if(ft_strequ(ft_strncat(s1, " again", 6), strncat(s2, " again", 6)) != 1)
	{
		printf("2-[KO]\n");
		return (1);
	}
	if(ft_strequ(ft_strncat(s1, "", 4), strncat(s2, "", 4)) != 1)
	{
		printf("3-[KO]\n");
		return (1);
	}
	printf("s1: %s\ns2: %s\n[OK]\n", s1, s2);
	return (0);
}

/*int main(void)
{
	char s1[100] = "ft_strncat: Hello";
	printf("Before cat:		%s\n", s1);
	
	ft_strncat(s1, " world", 3);
	printf("After 1st cat:	%s\n", s1);

	ft_strncat(s1, " again", 1);
	printf("After 2nd cat:	%s\n", s1);

	char s2[100] = "   strncat: Hello";
	printf("Before cat: 	%s\n", s2);

	strncat(s2, " world", 3);
	printf("After 1st cat:	%s\n", s2);

	strncat(s2, " again", 1);
	printf("After 2nd cat:	%s\n", s2);

	return (0);
}*/