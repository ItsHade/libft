/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:32:54 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/28 18:34:39 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	int		len;
	char	*str;

	i = 0;
	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[a])
	{
		str[i + a] = s2[a];
		a++;
	}
	str[i + a] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 2)
	{
		ptr = ft_strjoin(argv[1], argv[2]);
		printf("%s\n", ptr);
		free(ptr);
	}
}
*/
