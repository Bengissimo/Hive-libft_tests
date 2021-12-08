/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:22:30 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 21:22:34 by bkandemi         ###   ########.fr       */
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

	if (ft_strcmp(abc, abc) != strcmp(abc, abc))
	{
		printf(" abc vs abc [KO]\n");
		return (1);
	}
	if (ft_strcmp(abc, abc_) != strcmp(abc, abc_))
	{
		printf(" abc vs abc_ [KO]\n");
		return (1);
	}
	if (ft_strcmp(s1, s2) != strcmp(s1, s2))
	{
		printf(" \\0 vs \\200 [KO]\n");
		return (1);
	}
	if (ft_strcmp(s3, s4) != strcmp(s3, s4))
	{
		printf(" empty vs empty [KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
