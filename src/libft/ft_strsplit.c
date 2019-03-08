/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 22:28:41 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 16:12:32 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cl(char *str, char c)
{
	int		let;

	let = 0;
	while (str[let] != c)
	{
		let++;
		if (str[let] == '\0')
			return (let);
	}
	return (let);
}

static int		ft_cw(char *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (str[i] == c)
		i++;
	if (str[i] != c && str[i] != '\0')
		word++;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

static int		ft_clear_c(char **gg, int i)
{
	i--;
	while (i >= 0)
	{
		free(gg[i]);
		gg[i] = NULL;
		i--;
	}
	free(gg);
	gg = NULL;
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**gg;
	int		word;
	int		j;

	j = 0;
	word = 0;
	if (!s || !(gg = (char**)malloc(sizeof(char*) * (ft_cw((char*)s, c) + 1))))
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			if (!(gg[word] = (char*)malloc(sizeof(char) *
							(ft_cl((char *)s, c) + 1))))
				return (ft_clear_c(gg, word) ? NULL : NULL);
			while (*s != c && *s != '\0')
				gg[word][j++] = *s++;
			gg[word++][j] = '\0';
		}
		j = 0;
	}
	gg[word] = NULL;
	return (gg);
}
