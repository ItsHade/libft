/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:32:11 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/28 18:36:46 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int main(void)
{
	int fd;
	char str[] = "Same but with a new line";
	const char path[] = "./test.txt";

	fd = open(path, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (1);
	ft_putendl_fd(str, fd);
	close(fd);
}
*/
