/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:31:47 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/19 09:47:16 by bkandemi         ###   ########.fr       */
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


	/*printf( "Function:\tft_memmove w/o overlap\n" );
    printf( "Orignal :\t%s\n",str);
    printf( "Source:\t\t%s\n", str + 2 );
	printf( "Destination_after:\t%s\n", str + 4 );
    printf( "str:\t\t%s\n", str);
    
	char str2[50] = "abcdef";
	printf( "Function:\tft_memmove WITH overlap\n" );
    printf( "str2:\t\t\t%s\n",str2);
    printf( "Source:\t\t\t%s\n", str2 + 2 );
    ft_memmove( str2 + 4, str2 + 2, 3 );
	printf( "Destination_after:\t%s\n", str2 + 4 );
    printf( "str2:\t\t%s\n", str2);*/