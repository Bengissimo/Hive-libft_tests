/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:05:49 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/16 14:37:01 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char const *ABC = "ABC";

	printf("ABC vs ABC		%d\n", ft_strequ(ABC, "ABC"));
	printf("NUL vs NUL		%d\n", ft_strequ(NULL, NULL));
	printf("ABC vs empty		%d\n", ft_strequ(ABC, ""));
	printf("ABC vs NULL		%d\n", ft_strequ(ABC, NULL));
	printf("ABC vs ABB		%d\n", ft_strequ(ABC, "ABB"));
	printf("ABC vs BBC		%d\n", ft_strequ(ABC, "BBC"));
	printf("ABC vs ABCA		%d\n", ft_strequ(ABC, "ABCA"));
	printf("ABC vs AB		%d\n", ft_strequ(ABC, "AB"));

	return (0);
}
