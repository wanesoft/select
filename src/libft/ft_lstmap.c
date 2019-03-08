/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:23:34 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 18:07:47 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*buf;

	if (lst)
	{
		new = f(lst);
		buf = new;
		if (!new)
			return (buf);
		lst = lst->next;
	}
	while (lst)
	{
		new->next = f(lst);
		if (!new->next)
			return (buf);
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (buf);
}
