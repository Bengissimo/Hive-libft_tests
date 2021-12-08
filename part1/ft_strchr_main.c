/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:42:17 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 11:34:48 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char end[30] = "This string has a c";
	char start[30] = "c is here at the start";
	char mid[30] = "look at the c in the middle";
	char not[30] = "no no no no no no";

	if (ft_strchr(end, 'c') != strchr(end, 'c'))
	{
		printf("end[KO]\n");
		return (1);
	}
	if (ft_strchr(start, 'c') != strchr(start, 'c'))
	{
		printf("start[KO]\n");
		return (1);
	}
	if (ft_strchr(mid, 'c') != strchr(mid, 'c'))
	{
		printf("mid[KO]\n");
		return (1);
	}
	if (ft_strchr(not, 'c') != strchr(not, 'c'))
	{
		printf("not[KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}