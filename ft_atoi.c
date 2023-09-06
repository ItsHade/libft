/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:39:59 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 17:29:25 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	res;
	long	sign;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] >= 8 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
}
*/
