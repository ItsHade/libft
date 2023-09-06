/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:50:56 by maburnet          #+#    #+#             */
/*   Updated: 2022/12/02 15:41:43 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		mem;
	void		*ptr;

	mem = size * nmemb;
	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (mem / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, mem);
	return (ptr);
}
/*
#include <stdio.h>

// sizeof(char), ptr[i] = 'a', printf("%c", ptr[i])
int	main(void)
{
int	i;
int	a;
char	*ptr;

i = 0;
a = 10;
ptr = ft_calloc(a, sizeof(int));
while (i <= a)
{
if (ptr[i] == '\0')
{
ptr[i] = 90;
printf("%d", ptr[i]);
}
i++;
}
printf("\n");
free(ptr);
}
*/
