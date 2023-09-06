/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:08:24 by maburnet          #+#    #+#             */
/*   Updated: 2022/12/02 16:20:06 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*start;

	if (!*lst || !del)
		return ;
	start = *lst;
	while (start)
	{
		tmp = start->next;
		if (del)
		{
			del(start->content);
		}
		free(start);
		start = tmp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	del(void *s)
{
	(void)s;
}

void	ft_putlst(t_list *lst)
{
	printf("PRINTING LIST\n");
	while (lst)
	{
		printf("&lst: %p\n", lst);
		printf("lst->content: %s\n", (char *)lst->content);
		printf("&lst->next: %p\n", lst->next);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*e1 = malloc(sizeof(t_list));
	t_list	*e2 = malloc(sizeof(t_list));
	t_list	*e3 = malloc(sizeof(t_list));

	e1->content = "TEST";
	e1->next = e2;
	e2->content = "TEST1";
	e2->next = e3;
	e3->content = "TEST3";
	e3->next = NULL;
	ft_putlst(e1);
	ft_lstclear(&e1, &del);
	ft_putlst(e1);
}
*/
