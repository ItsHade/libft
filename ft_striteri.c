/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:28:35 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/25 18:41:04 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	f(unsigned int i, char *s)
{
	s[i] = s[i] + 1;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "0123456789";
	printf("%s\n", str);
	ft_striteri(str, *f);
	printf("%s\n", str);
}
*/
