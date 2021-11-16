/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:31:47 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/12 13:16:57 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

/*int main(void)
{
    char str[50] = "Hello darkness my old friend.";
    printf( "str:\t\t%s\n",str);
    printf( "src:\t\t%s\n", str + 6);
    printf( "dst:\t\t%s\n", str + 15);
    ft_memmove(str + 11, str + 5, 20);
    printf( "Result:\t\t%s\n", str );
    return (0);
}*/

int main()
{
    char str[50] = "abcdef";
    printf( "Function:\tft_memmove w/o overlap\n" );
    printf( "Orignal :\t%s\n",str);
    printf( "Source:\t\t%s\n", str + 2 );
    ft_memmove( str + 4, str + 2, 1 );
	//ft_memcpy( str + 4, str + 2, 1 );
	printf( "Destination_after:\t%s\n", str + 4 );
    printf( "str:\t\t%s\n", str);
    
	char str2[50] = "abcdef";
	 printf( "Function:\tft_memmove WITH overlap\n" );
    printf( "str2:\t\t\t%s\n",str2);
    printf( "Source:\t\t\t%s\n", str2 + 2 );
    ft_memmove( str2 + 4, str2 + 2, 3 );
	//ft_memcpy( str2 + 4, str2 + 2, 3 );
	printf( "Destination_after:\t%s\n", str2 + 4 );
    printf( "str2:\t\t%s\n", str2);

	return 0;
}
