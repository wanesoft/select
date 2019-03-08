/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_done.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:21:16 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:21:20 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_make_done(t_mygv *mygv)
{
	int					i;
	int					j;

	i = 1000;
	j = 0;
	ft_back_screen(0);
	while (i)
		i--;
	while (mygv->chosen[i])
	{
		if (j && mygv->chosen[i] == 49)
			ft_putstr_fd(" ", STDOUT_FILENO);
		if (mygv->chosen[i] == 49)
		{
			ft_putstr_fd(mygv->av[i], STDOUT_FILENO);
			j++;
		}
		i++;
	}
	ft_del_mygv(mygv);
	exit(EXIT_SUCCESS);
}
