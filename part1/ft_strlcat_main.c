/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:38:46 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/22 21:18:54 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	strlcat_test(size_t size)
{
	int ft_i;
	int i;
	
	char ft_s[20] = "ABC";
	char s[20] = "ABC";
	ft_i = ft_strlcat(ft_s, "12345", size);
	i = strlcat(s, "12345", size);
	if (ft_i != i || ft_strequ(ft_s, s) != 1)
	{
		printf("dstsize %zu:[KO], ft_s: %s, s: %s\n", size, ft_s, s);
		return (0);
	}
	return (1);
}

int main(void)
{
	
	char ft_s[20] = "ABC";
	ft_strlcat(ft_s, "12345", 3);
	printf("%s\n", ft_s);
	
	for (int i = 0; i < 20; i++)
	{
		if (strlcat_test(i) != 1)
			return (1);
	}
	printf("[OK]\n");
	return (0);
}
