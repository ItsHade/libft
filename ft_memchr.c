/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:03:47 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 21:16:34 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char )c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "This is a test string";
	char s1[] = "Hello a world!";
	char *ptr = ft_memchr(s, 97, 10);
	printf("ft_memchr: %s\n", ptr);
	char *ptr1 = memchr(s1, 97, 10);
	printf("memchr: %s\n", ptr1);
}
*/
