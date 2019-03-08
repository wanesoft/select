/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 05:24:52 by draynor           #+#    #+#             */
/*   Updated: 2018/11/27 03:20:51 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ccount(int i)
{
	unsigned int	bn;
	int				ccount;

	ccount = 1;
	bn = 0;
	if (i < 0)
		bn = i * -1;
	else
		bn = i;
	while (bn >= 10)
	{
		bn = bn / 10;
		ccount++;
	}
	return (ccount);
}

static int	ft_mp(int i)
{
	if (i < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int i)
{
	char			*res;
	int				iter;
	int				col;

	iter = 0;
	col = ft_ccount(i);
	if (!(res = malloc(sizeof(char) * (col + (ft_mp(i) ? 2 : 1)))))
		return (NULL);
	if (i == -2147483648)
		return (ft_strdup("-2147483648"));
	if (i < 0)
	{
		res[iter++] = '-';
		i = i * -1;
	}
	else
		col = col - 1;
	res[col + 1] = '\0';
	while (col >= (0 + iter))
	{
		res[col] = (char)(48 + (i % 10));
		col--;
		i = i / 10;
	}
	return (res);
}
