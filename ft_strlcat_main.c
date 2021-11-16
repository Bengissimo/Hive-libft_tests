/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:38:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 13:54:03 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s1[10] = "12345";
	printf("Before cat:		%s\n", s1);
	
	printf("%zu ", ft_strlcat(s1, "6789", 2));
	printf("all good:		%s\n", s1);


	char s2[10] = "12345";
	printf("%zu ", ft_strlcat(s2, "678910574635786348756", 10));
	printf("dst + src >= dstsize:	%s\n", s2);

	char s3[10] = "12345";
	printf("Before cat:		%s\n", s3);

	printf("%zu ", strlcat(s3, "6789", 2));
	printf("all good:		%s\n", s3);

	char s4[10] = "12345";
	printf("%zu ", ft_strlcat(s4, "678910574635786348756", 10));
	printf("dst + src >= dstsize:	%s\n", s4);

	return (0);
}
