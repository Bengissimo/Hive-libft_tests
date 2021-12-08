/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:27:24 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/24 21:30:39 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	if(ft_strequ(ft_strdup("Hello world\n"), strdup("Hello world\n")) != 1)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("[OK]\n");
	return (0);
}
