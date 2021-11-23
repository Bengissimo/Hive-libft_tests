/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:47:40 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 16:47:43 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s0 = "";
	char *s1 = "1";
	char *s2 = "1263476378568346587647";
	
	if (ft_strlen(s0) != strlen(s0))
	{
		printf("empty[KO]\n");
		return (1);
	}
	if (ft_strlen(s1) != strlen(s1) || ft_strlen(s2) != strlen(s2))
	{
		printf("[KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
