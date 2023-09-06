/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:40:57 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 18:48:01 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char )c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[30] = "ABCD EFGH";
	char str2[30] = "ABCD EFGH";

	printf("Before memset => %s", str1);
	memset(str1, 'x', 3);
	printf("\nBefore memset => %s\n", str1);

	printf("Before ft_memset => %s", str2);
	ft_memset(str2, 'x', 3);
	printf("\nBefore ft_memset => %s\n", str2);

	return (0);
}
*/
