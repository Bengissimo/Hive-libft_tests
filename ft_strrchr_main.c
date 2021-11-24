/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:26:21 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 12:12:21 by bkandemi         ###   ########.fr       */
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

	if (ft_strrchr(end, 'c') != strrchr(end, 'c'))
	{
		printf("end[KO]\n");
		return (1);
	}
	if (ft_strrchr(start, 'c') != strrchr(start, 'c'))
	{
		printf("start[KO]\n");
		return (1);
	}
	if (ft_strrchr(mid, 'c') != strrchr(mid, 'c'))
	{
		printf("mid[KO]\n");
		return (1);
	}
	if (ft_strrchr(not, 'c') != strrchr(not, 'c'))
	{
		printf("not[KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
