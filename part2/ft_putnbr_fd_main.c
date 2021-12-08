/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:52:23 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/17 16:57:38 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>

static void	test_putnbr_fd(char *filename, int n)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	ft_putnbr_fd(n, fd);
	close(fd);
	chmod(filename, 0644);
}

static void	test_putchar_fd(char *filename, char c)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	ft_putchar_fd(c, fd);
	close(fd);
	chmod(filename, 0644);
}

int	main(void)
{
	test_putnbr_fd("putnbr_fd_TEST.txt", -2147483648);
	test_putchar_fd("putnbr_fd_TEST.txt", '\n');

	test_putnbr_fd("putnbr_fd_TEST.txt", 2147483647);
	test_putchar_fd("putnbr_fd_TEST.txt", '\n');

	test_putnbr_fd("putnbr_fd_TEST.txt", 0);
	test_putchar_fd("putnbr_fd_TEST.txt", '\n');

	test_putnbr_fd("putnbr_fd_TEST.txt", 'a');
	test_putchar_fd("putnbr_fd_TEST.txt", '\n');

	test_putnbr_fd("putnbr_fd_TEST.txt", 'b');
	test_putchar_fd("putnbr_fd_TEST.txt", '\n');

	test_putnbr_fd("putnbr_fd_TEST.txt", ' ');
	test_putchar_fd("putnbr_fd_TEST.txt", '\n');

	return (0);
}