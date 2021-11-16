/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:27:01 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/15 21:42:02 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	
	char *haystack = "Foo Bar Baz";
	char *needle = "B";
	char *ptr1;

	ptr1 = ft_strstr(haystack, needle);
	ft_putstr(ptr1);
	ft_putchar('\n');

	ptr1 = strstr(haystack, needle);
	ft_putstr(ptr1);
	ft_putchar('\n');

	ptr1 = ft_strstr(haystack, "");
	ft_putstr(ptr1);
	ft_putchar('\n');

	ptr1 = strstr(haystack, "");
	ft_putstr(ptr1);
	ft_putchar('\n');

	/*ptr1 = ft_strstr(haystack, null);
	ft_putstr(ptr1);
	ft_putchar('\n');*/

	/*ptr1 = strstr(haystack, null);
	ft_putstr(ptr1);
	ft_putchar('\n');*/

	
	
	return (0);
}