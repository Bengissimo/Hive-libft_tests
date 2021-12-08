/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:05:13 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 16:32:03 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "Hello";

	if(ft_strequ(ft_strcat(s1, " world"), strcat(s2, " world")) != 1)
	{
		printf("[KO]\n");
		return (1);
	}
	if(ft_strequ(ft_strcat(s1, " again"), strcat(s2, " again")) != 1)
	{
		printf("[KO]\n");
		return (1);
	}
	if(ft_strequ(ft_strcat(s1, ""), strcat(s2, "")) != 1)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("s1: %s\ns2: %s\n[OK]\n", s1, s2);
	return (0);
}
