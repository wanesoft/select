/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 01:38:36 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 13:22:44 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t l)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && l)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		l--;
	}
	if (s1[i] == '\0' && l != 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else if (s2[i] == '\0' && l != 0)
		return ((unsigned char)s2[i] + (unsigned char)s1[i]);
	return (0);
}
