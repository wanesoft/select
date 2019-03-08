/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 00:20:42 by draynor           #+#    #+#             */
/*   Updated: 2018/11/22 00:32:14 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t in)
{
	size_t	i;
	char	*c;

	c = s;
	i = 0;
	while (i < in)
	{
		c[i] = '\0';
		i++;
	}
}
