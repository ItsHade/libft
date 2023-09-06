/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:04:30 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 21:47:49 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", ft_strchr(argv[1], 97));// a
		printf("%s\n", ft_strchr(argv[1], 121));// y
		printf("%s\n", ft_strchr(argv[1], 114));// r
	}
}
*/
