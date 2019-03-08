/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep_chosen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:19:15 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:19:19 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

char					*ft_prep_chosen(int len)
{
	char				*str;
	int					i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
	{
		ft_putstr_fd("Error malloc\n", 2);
		exit(EXIT_FAILURE);
	}
	while (i < len)
	{
		str[i] = 48;
		i++;
	}
	str[len] = '\0';
	return (str);
}
