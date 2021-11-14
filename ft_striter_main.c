/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:55:56 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/11 10:57:16 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
	return ;
}

void	underscore(char *s)
{
	if (s[0] == ' ')
		s[0] = '_';
}

void fn(unsigned int i, char *s)
{
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putchar(s[0]);
	ft_putchar('\n');
}

int main(void)
{
	char s[3];

	s[0] = 'a';
	s[1] = 'b';
	s[2] = 'c';
	
	/*ft_striter(s, &putendl);
	ft_putstr(s);
	ft_putchar('\n');
	ft_striter(s, &underscore);
	ft_putstr(s);
	ft_putchar('\n');*/

	ft_putstr(s);
	ft_putchar('\n');
	ft_striteri(s, &fn);
	ft_putstr(s);
	ft_putchar('\n');
	return (0);
}