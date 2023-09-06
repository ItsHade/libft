/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:59:56 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/28 17:45:51 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getmallocsize(int n)
{
	unsigned int	nb;
	unsigned int	size;

	size = 0;
	if (n < 0)
	{
		nb = n * -1;
		size++;
	}
	else
		nb = n;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_revstr(char *str)
{
	int		i;
	int		len;
	char	swap;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		swap = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = swap;
		i++;
	}
	return (str);
}

char	*ft_putnbr(char *str, unsigned int nb, int sign)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	if (sign < 0)
	{
		str[i] = '-';
		i++;
	}
	str = ft_revstr(str);
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	nb;
	int		sign;
	char	*str;

	sign = 1;
	str = ft_calloc(sizeof(char), (ft_getmallocsize(n) + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		nb = n * -1;
		sign *= -1;
	}
	else
		nb = n;
	str = ft_putnbr(str, nb, sign);
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(3));
	printf("%s\n", ft_itoa(34));
	printf("%s\n", ft_itoa(347));
	printf("%s\n", ft_itoa(-347));
	printf("%s\n", ft_itoa(-34));
	printf("%s\n", ft_itoa(-3));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
*/
