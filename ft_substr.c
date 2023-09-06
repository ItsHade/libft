/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:53:52 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/28 18:41:59 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	taille;
	size_t	size;

	taille = ft_strlen((char *)s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (len > size)
		len = size;
	if (taille < len)
		len = taille;
	i = -1;
	j = 0;
	str = ft_calloc(sizeof(char), (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[++i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	ptr = ft_substr("tripouille", 0, 42000);
	printf("%s\n", ptr);
	free(ptr);
}
*/
