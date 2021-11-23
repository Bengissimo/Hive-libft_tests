/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:13:23 by bkandemi          #+#    #+#             */
/*   Updated: 2021/11/17 17:17:22 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>

void	test_putendl_fd(char *filename, char *s)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	ft_putendl_fd(s, fd);
	close(fd);
	chmod(filename, 0644);
}

int main(void)
{
	test_putendl_fd("putendl_fd_TEST.txt", "hello world");
	test_putendl_fd("putendl_fd_TEST.txt", "this is me");

	return (0);
}