/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 22:13:15 by draynor           #+#    #+#             */
/*   Updated: 2018/11/27 01:41:23 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_ccc(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		len;
	char	*sw;
	char	*swg;

	if (!s)
		return (0);
	while (*s == '\n' || *s == '\t' || *s == ' ')
		s++;
	len = ft_ccc((char *)s);
	if (!(sw = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = -1;
	while (s[++len] != '\0')
		sw[len] = s[len];
	sw[len] = '\0';
	while (sw[--len] == '\n' || sw[len] == '\t' ||
			sw[len] == ' ' || sw[len] == '\0')
		sw[len] = '\0';
	if (!(swg = (char *)malloc(sizeof(char) * (ft_ccc((char *)sw) + 1))))
		return (NULL);
	len = -1;
	while (sw[++len] != '\0')
		swg[len] = sw[len];
	swg[len] = '\0';
	return (swg);
}
