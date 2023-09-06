/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:09:13 by maburnet          #+#    #+#             */
/*   Updated: 2022/12/02 15:15:37 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islittle(char const *big, const char *little, size_t i, size_t len)
{
	size_t	a;

	a = 0;
	while (little[a])
	{
		if (little[a] != big[i])
			return (0);
		i++;
		a++;
	}
	if (i <= len)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (ft_islittle(big, little, i, len) == 1)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*ptr1;
	char	*ptr2;
	if (argc > 2)
	{
		printf("MINE:\n");
		ptr1 = ft_strnstr(argv[1], argv[2], 8);
		if (ptr1)
			printf("%s\n", ptr1);
		printf("NOT MINE:\n");
		ptr2 = ft_strnstr(argv[1], argv[2], 8);
		if (ptr2)
			printf("%s\n", ptr2);
	}
}
*/
