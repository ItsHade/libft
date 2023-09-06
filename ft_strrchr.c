/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:02:44 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 22:16:51 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	i = len;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	if (s[len] == (unsigned char)c)
		return ((char *)s + len - 1);
	return (NULL);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", ft_strrchr(argv[1], 97));
		printf("%s\n", ft_strrchr(argv[1], 122));
		printf("%s\n", ft_strrchr(argv[1], 114));
		printf("%s\n", ft_strrchr(argv[1], 0));
	}
}
*/
