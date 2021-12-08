/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:05:49 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 12:13:49 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char const *ABC = "ABC";

	if (ft_strequ(ABC, "ABC") != 1)
	{
		printf("ABC vs ABC [KO]\n");
		return (1);
	}
	if (ft_strequ(NULL, NULL) != 1)
	{
		printf("NUL vs NUL [KO]\n");
		return (1);
	}
	if (ft_strequ(ABC, "") != 0)
	{
		printf("ABC vs empty [KO]\n");
		return (1);
	}
	if (ft_strequ(ABC, NULL) != 0)
	{
		printf("ABC vs NUL [KO]\n");
		return (1);
	}
	if (ft_strequ(ABC, "ABB") != 0)
	{
		printf("ABC vs ABB [KO]\n");
		return (1);
	}
	if (ft_strequ(ABC, "BBC") != 0)
	{
		printf("ABC vs BBC [KO]\n");
		return (1);
	}
	if (ft_strequ(ABC, "ABCA") != 0)
	{
		printf("ABC vs ABCA [KO]\n");
		return (1);
	}
	if (ft_strequ(ABC, "AB") != 0)
	{
		printf("ABC vs AB [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
