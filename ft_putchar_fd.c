/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:29:03 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 18:30:37 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;
	char c;
	const char path[] = "./test.txt";

	c = 'A';

	fd = open(path, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (1);
	printf("fd = %d\n", fd);
	ft_putchar_fd(c, fd);
	close(fd);
}
*/
