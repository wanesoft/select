/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:32:35 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 18:37:52 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*buf;

	if (!begin_list)
		return ;
	if (*begin_list)
	{
		buf = ft_create_elem(data);
		buf->next = *begin_list;
		*begin_list = buf;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
