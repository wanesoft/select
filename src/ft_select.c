/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:19:30 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:21:07 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_select(int ac, char **av)
{
	t_mygv				mygv;

	ft_set_signals();
	ft_init_mygv(&mygv, ac, av);
	ft_init_screen(&mygv);
	ft_get_mygv(&mygv);
	ft_show_screen(&mygv);
	ft_set_signals();
	ft_work_input();
}
