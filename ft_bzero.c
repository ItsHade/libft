/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:07:39 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/18 18:48:23 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
        char str1[30] = "ABCD EFGH";
        char str2[30] = "ABCD EFGH";

        printf("Before bzero => %s", str1);
        bzero(str1, 3);
        printf("\nBefore bzero => %s\n", str1);

        printf("Before ft_bzero => %s", str2);
        ft_bzero(str2, 3);
        printf("\nBefore ft_bzero => %s\n", str2);

        return (0);
}
*/
