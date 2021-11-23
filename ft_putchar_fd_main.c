/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:06:29 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/17 16:57:44 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>

static void	test_putchar_fd(char *filename, char c)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	ft_putchar_fd(c, fd);
	close(fd);
	chmod(filename, 0644);
}

int main(void)
{
	test_putchar_fd("putchar_fd_TEST.txt", 'h');
	test_putchar_fd("putchar_fd_TEST.txt", 'e');
	test_putchar_fd("putchar_fd_TEST.txt", 'l');
	test_putchar_fd("putchar_fd_TEST.txt", 'l');
	test_putchar_fd("putchar_fd_TEST.txt", 'o');
	test_putchar_fd("putchar_fd_TEST.txt", ' ');

	return (0);
}