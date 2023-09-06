/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:30:46 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/28 18:32:59 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>

int main(void)
{
	int fd;
	char str[] = "Write this test string in fd!";
	const char path[] = "./test.txt";

	fd = open(path, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (1);
	ft_putstr_fd(str, fd);
	close(fd);
}
*/
