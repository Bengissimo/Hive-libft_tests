/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:05:13 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 10:16:59 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s1[100] = "ft_strcat: Hello";
	printf("Before cat:		%s\n", s1);
	
	ft_strcat(s1, " world");
	printf("After 1st cat:	%s\n", s1);

	ft_strcat(s1, " again");
	printf("After 2nd cat:	%s\n", s1);

	char s2[100] = "   strcat: Hello";
	printf("Before cat: 	%s\n", s2);

	strcat(s2, " world");
	printf("After 1st cat:	%s\n", s2);

	strcat(s2, " again");
	printf("After 2nd cat:	%s\n", s2);

	return (0);
}