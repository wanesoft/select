/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 00:50:46 by draynor           #+#    #+#             */
/*   Updated: 2018/11/26 22:08:23 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	char	*a;
	char	*b;

	b = (char *)n;
	if (*b == 0)
		return ((char *)h);
	while (*((char *)h) != 0)
	{
		if (*((char *)h) != *b)
		{
			h++;
			continue ;
		}
		a = (char *)h;
		while (1)
		{
			if (*b == 0)
				return ((char *)h);
			if (*a++ != *b++)
				break ;
		}
		b = (char *)n;
		h++;
	}
	return ((char *)0);
}
