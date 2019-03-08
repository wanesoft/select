/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:29:19 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:29:23 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

size_t					ft_get_max_len(char **av)
{
	size_t				i;
	size_t				max;

	i = 0;
	max = 0;
	while (av[i])
	{
		if (max < ft_strlen(av[i]))
			max = ft_strlen(av[i]);
		i++;
	}
	return (max);
}
