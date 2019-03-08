/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 21:07:32 by draynor           #+#    #+#             */
/*   Updated: 2019/03/08 21:07:34 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int						main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr_fd("ft_select: need arguments\n", 2);
		ft_putstr_fd("usage: ft_select [file ...]\n", 2);
	}
	else
		ft_select((ac - 1), (++av));
	return (0);
}
