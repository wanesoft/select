/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 01:04:13 by draynor           #+#    #+#             */
/*   Updated: 2018/11/23 01:26:44 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
			i++;
		else if (((unsigned char*)s1)[i] < ((unsigned char*)s2)[i])
			return ((int)((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		else if (((unsigned char*)s1)[i] > ((unsigned char*)s2)[i])
			return ((int)((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		else
			i++;
	}
	return (0);
}
