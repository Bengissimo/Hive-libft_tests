/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:35:29 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/17 16:59:06 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>

void	test_putstr_fd(char *filename, char *s)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	ft_putstr_fd(s, fd);
	close(fd);
	chmod(filename, 0644);
}

int main(void)
{
	test_putstr_fd("putstr_fd_TEST.txt", "hello ");
	test_putstr_fd("putstr_fd_TEST.txt", "world\n");

	return (0);
}