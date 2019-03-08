/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:42:27 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 14:08:39 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*po;
	int				i;

	i = 0;
	if (size == 0)
		return (0);
	if (!(po = (unsigned char *)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (i < (int)size)
	{
		po[i] = 0;
		i++;
	}
	return ((void *)po);
}
