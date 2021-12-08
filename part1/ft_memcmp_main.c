/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:14:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/18 23:12:36 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
    char a[1] = { 128 };
    char b[1] = { 0 };
	char c[1] = { 0 };
	char d[0];
	char e[0];
    
	if (ft_memcmp(a, b, 1) != memcmp(a, b, 1) ||
		ft_memcmp(b, c, 1) != memcmp(b, c, 1) ||
		ft_memcmp(d, e, 0) != ft_memcmp(d, e, 0))
	{	
		printf("[KO]\n");
		return (1);
	}
	printf("[OK]\n");
    return (0);
}
