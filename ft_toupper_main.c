/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:08:39 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 15:10:20 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"


int main(void)
{
	int low_a = 'a';
	int eight = '8';

	
	if (toupper(low_a) != ft_toupper(low_a))
	{
		printf("%c [KO]\n", low_a);
		return (1);
	}
	if (toupper(eight) != ft_toupper(eight))
	{
		printf("%c [KO]\n", eight);
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
