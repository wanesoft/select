/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 20:00:29 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 14:10:55 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s2;
	int		j;

	i = 0;
	if (!f || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	if (!(s2 = (char *)malloc(sizeof(char) * j + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = f(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
