/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:31:47 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 21:24:42 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50] = "abcdef";
    
    if (ft_strequ(ft_memmove(s + 4, s + 2, 1), memmove(s + 4, s + 2, 1)) != 1)
	{
		printf("ft_memmove w/o overlap[KO]\n");
		return (1);
	}
	if (ft_strequ(ft_memmove(s + 4, s + 2, 3), memmove(s + 4, s + 2, 3)) != 1)
	{
		printf("ft_memmove WITH overlap[KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}