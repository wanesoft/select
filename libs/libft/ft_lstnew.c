/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 03:46:05 by draynor           #+#    #+#             */
/*   Updated: 2018/11/27 03:22:37 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_bv(void *con, size_t len)
{
	size_t		i;
	void		*vo;

	i = 0;
	if (!(vo = (void *)malloc(len)))
		return (NULL);
	while (i < len)
	{
		((unsigned char *)vo)[i] = ((unsigned char *)con)[i];
		i++;
	}
	return (vo);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = ft_bv((void *)content, content_size)))
			return (NULL);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
