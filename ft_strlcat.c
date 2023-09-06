/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:11:51 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/21 12:37:56 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (dst[i] == '\0')
			break ;
		i++;
	}
	if (i == size)
	{
		return (size + ft_strlen(src));
	}
	while (i < (size - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return ((i - j) + ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		printf("mine: %ld\n", ft_strlcat(argv[1], argv[2], 4));
		printf("not mine: %ld\n", strlcat(argv[1], argv[2], 4));
		printf("dst: %s\n", strncat(argv[1], argv[2], 4));
	}
}
*/
