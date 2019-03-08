/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:31:19 by draynor           #+#    #+#             */
/*   Updated: 2018/11/26 00:57:47 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			a;

	a = c;
	i = 0;
	while (*s != '\0')
	{
		if (*s == a)
			return ((char*)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
