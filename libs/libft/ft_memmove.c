/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 00:37:21 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 13:34:05 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*cdst;
	const unsigned char		*csrc;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	if (src == dst)
		return (dst);
	i = 0;
	if (csrc < cdst)
	{
		i++;
		while (i <= len)
		{
			cdst[len - i] = csrc[len - i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			*(cdst++) = *(csrc++);
	}
	return (dst);
}
