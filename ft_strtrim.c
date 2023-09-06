/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:38:19 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/26 16:46:36 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	int		len;
	char	*str;

	i = 0;
	a = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	len = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && i < len)
		len--;
	str = malloc(sizeof(char) * (len - i + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
		str[a++] = s1[i++];
	str[a] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
if (argc > 2)
{
printf("%s\n", ft_strtrim(argv[1], argv[2]));
}
}
*/
