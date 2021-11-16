/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:05:37 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/16 14:38:56 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char const *ABC = "ABC";

	printf("ABC vs ABC		%d\n", ft_strnequ(ABC, "ABC", 1));
	printf("ABC vs ABC		%d\n", ft_strnequ(ABC, "ABC", 2));
	printf("ABC vs ABC		%d\n", ft_strnequ(ABC, "ABC", 3));
	printf("ABC vs ABC		%d\n", ft_strnequ(ABC, "ABC", 4));
	printf("NUL vs NUL		%d\n", ft_strnequ(NULL, NULL, 1));
	printf("ABC vs empty		%d\n", ft_strnequ(ABC, "", 1));
	printf("ABC vs NULL		%d\n", ft_strnequ(ABC, NULL, 3));
	printf("ABC vs ABB		%d\n", ft_strnequ(ABC, "ABB", 3));
	printf("ABC vs BBC		%d\n", ft_strnequ(ABC, "BBC", 3));
	printf("ABC vs ABCA		%d\n", ft_strnequ(ABC, "ABCA", 1));
	printf("ABC vs AB		%d\n", ft_strnequ(ABC, "AB", 2));

	return (0);
}

