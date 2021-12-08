/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:39:18 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 11:32:23 by bkandemi         ###   ########.fr       */
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

	if (ft_memchr(end, 'c', ft_strlen(end)) != memchr(end, 'c', ft_strlen(end)))
	{
		printf("end[KO]\n");
		return (1);
	}
	if (ft_memchr(start, 'c', ft_strlen(start)) != memchr(start, 'c', ft_strlen(start)))
	{
		printf("start[KO]\n");
		return (1);
	}
	if (ft_memchr(mid, 'c', ft_strlen(mid)) != memchr(mid, 'c', ft_strlen(mid)))
	{
		printf("mid[KO]\n");
		return (1);
	}
	if (ft_memchr(not, 'c', ft_strlen(not)) != memchr(not, 'c', ft_strlen(not)))
	{
		printf("not[KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}