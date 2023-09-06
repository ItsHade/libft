/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maburnet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:07:08 by maburnet          #+#    #+#             */
/*   Updated: 2022/11/25 18:12:32 by maburnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	cur = *lst;
	if (lst != NULL && *lst != NULL)
	{
		cur = ft_lstlast(*(lst));
		cur->next = new;
		return ;
	}
	*lst = new;
}
