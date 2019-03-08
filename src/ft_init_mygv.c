/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mygv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:23:50 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:26:59 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static void				ft_init_mygv_2(t_mygv *mygv)
{
	char *buf;

	buf = malloc(2048);
	tgetent(buf, getenv("TERM"));
	mygv->ti = tgetstr("ti", NULL);
	mygv->vi = tgetstr("vi", NULL);
	mygv->te = tgetstr("te", NULL);
	mygv->ve = tgetstr("ve", NULL);
	mygv->us = tgetstr("us", NULL);
	mygv->ue = tgetstr("ue", NULL);
	mygv->cl = tgetstr("cl", NULL);
}

void					ft_init_mygv(t_mygv *mygv, int ac, char **av)
{
	mygv->ac = ac;
	mygv->av = av;
	mygv->cur = 0;
	mygv->chosen = ft_prep_chosen(ac);
	mygv->max_len = ft_get_max_len(av);
	ft_get_tty_col_ros(mygv);
	mygv->i = 0;
	tcgetattr(0, &mygv->newt);
	tcgetattr(0, &mygv->oldt);
	ft_init_mygv_2(mygv);
}
