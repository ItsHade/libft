/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:09:25 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/21 12:05:17 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <bsd/string.h>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		printf("mine: %ld\n", ft_strlcpy(argv[1], argv[2], 4)); 
		printf("not mine: %ld\n", strlcpy(argv[1], argv[2], 4)); 
		printf("dst: %s\n", strncpy(argv[1], argv[2], 4)); 
	}
}
*/
