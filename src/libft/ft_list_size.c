/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:38:50 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 18:39:08 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*buf;
	int		i;

	i = 0;
	if (!begin_list)
	{
		return (0);
	}
	buf = begin_list;
	while (buf)
	{
		buf = buf->next;
		i++;
	}
	return (i);
}
