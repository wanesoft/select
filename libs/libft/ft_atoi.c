/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:33:49 by draynor           #+#    #+#             */
/*   Updated: 2018/12/02 12:54:43 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	long long int		res;
	int					n;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
					|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	n = 1;
	res = 0;
	if (str[i] == '-')
		n = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9')))
	{
		res = (res * 10) + (str[i] - 48);
		if (res < 0)
			return (0 - n);
		i++;
	}
	if (n == 0)
		res *= -1;
	return (res);
}
