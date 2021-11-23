/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:09:09 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/23 15:11:35 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"


int main(void)
{
	int _A = 'A';
	int eight = '8';

	
	if (tolower(_A) != ft_tolower(_A))
	{
		printf("%c [KO]\n", _A);
		return (1);
	}
	if (tolower(eight) != ft_tolower(eight))
	{
		printf("%c [KO]\n", eight);
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
