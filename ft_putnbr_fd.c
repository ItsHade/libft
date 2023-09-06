/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:33:11 by maburnet          #+#    #+#             */
/*   Updated: 2022/12/02 15:34:39 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr <= 9)
		ft_putchar_fd(nbr + 48, fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + 48, fd);
	}
}
/*
#include <fcntl.h>

int main(void)
{
	int fd;
	int n;
	const char path[] = "./test.txt";

	n = 2147483647;
	fd = open(path, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (1);
	ft_putnbr_fd(n, fd);
	close(fd);
}
*/
