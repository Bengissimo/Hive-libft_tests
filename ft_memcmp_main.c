/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:14:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 09:38:55 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
    printf("%i\n", ft_memcmp("\200", "\0", 1));

    printf("%i\n", ft_memcmp((char[] ) { '\200' }, "\0", 1));

    printf("%i\n", ft_memcmp((unsigned char[] ) { '\200' }, "\0", 1));

    char a[1] = { 128 };
    char b[1] = { 0 };
    
	printf("%i\n", ft_memcmp(a, b, 1));

	printf("%i\n", memcmp("\200", "\0", 1));

    printf("%i\n", memcmp((char[] ) { '\200' }, "\0", 1));

    printf("%i\n", memcmp((unsigned char[] ) { '\200' }, "\0", 1));

    printf("%i\n", memcmp(a, b, 1));
    return (0);
}
