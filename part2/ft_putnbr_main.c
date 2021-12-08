/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:27:01 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 22:27:05 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("0	0	0	1	12	123	2147483647	-1	-2147483647	-2147483648\n");
	ft_putnbr(-0);
	ft_putchar('\t');
	ft_putnbr(0);
	ft_putchar('\t');
	ft_putnbr(+0);
	ft_putchar('\t');
	ft_putnbr(1);
	ft_putchar('\t');
	ft_putnbr(12);
	ft_putchar('\t');
	ft_putnbr(123);
	ft_putchar('\t');
	ft_putnbr(2147483647);
	ft_putchar('\t');
	ft_putnbr(-1);
	ft_putchar('\t');
	ft_putnbr(-2147483647);
	ft_putchar('\t');
	ft_putnbr(-2147483648);
	ft_putchar('\t');
	printf("\nAre they same? if yes [OK], if no [KO]\n");
	return (0);
}
