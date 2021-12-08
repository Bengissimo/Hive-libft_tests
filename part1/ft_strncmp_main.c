/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:22:48 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 21:23:58 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *abc = "abc";
	char *abc_ = "abc_";

	char *s1 = "\0";
	char *s2 = "\200";

	char *s3 = "";
	char *s4 = "";

	if (ft_strncmp(abc, abc, 5) != strncmp(abc, abc, 5))
	{
		printf(" abc vs abc [KO]\n");
		return (1);
	}
	if (ft_strncmp(abc, abc_, 3) != strncmp(abc, abc_ ,3))
	{
		printf(" abc vs abc_ [KO]\n");
		return (1);
	}
	if (ft_strncmp(s1, s2, 1) != strncmp(s1, s2, 1))
	{
		printf(" \\0 vs \\200 [KO]\n");
		return (1);
	}
	if (ft_strncmp(s3, s4, 1) != strncmp(s3, s4, 1))
	{
		printf(" empty vs empty [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
