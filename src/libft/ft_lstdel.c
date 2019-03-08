/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 03:50:35 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 17:19:29 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*buf;

	if (!alst || !(*alst) || !del)
		return ;
	while (*alst)
	{
		buf = *alst;
		ft_lstdelone(alst, del);
		*alst = buf->next;
	}
	*alst = NULL;
}
