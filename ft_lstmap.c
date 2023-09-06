/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:32:14 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/28 18:27:14 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;

	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new;
	lst = lst -> next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new);
	}
	return (new_lst);
}
/*
#include <stdio.h>

void	ft_putlst(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst -> next;
	}
}

int	main(void)
{
	t_list *e1 = malloc(sizeof(t_list));
	t_list *e2 = malloc(sizeof(t_list));
	t_list *e3 = malloc(sizeof(t_list));
	t_list *e4 = malloc(sizeof(t_list));
	t_list *e5 = malloc(sizeof(t_list));
	
	e1->content = "This";
	e1->next = e2;
	e2->content = "is";
	e2->next = e3;
	e3->content = "a";
	e3->next = e4;
	e4->content = "test";
	e4->next = e5;
	e5->content = "list";
	e5->next = NULL;
	
	ft_putlst(e1);

	ft_putlst(e1);

}
*/
