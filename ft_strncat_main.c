/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:31:22 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 10:43:41 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
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
}