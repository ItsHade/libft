/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:02:56 by maburnet          #+#    #+#             */
/*   Updated: 2022/12/02 15:33:15 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst1[100];
	char	src1[] = "hello";
	char	dst2[100];
	char	src2[] = "testa";
	
	ft_memcpy(dst1, src1, 4);
	printf("ft_memcpy: %s\n", dst1); 
	
	memcpy(dst2, src2, 4);
	printf("memcpy: %s\n", dst2); 
}
*/
