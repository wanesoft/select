/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_screen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 21:07:46 by draynor           #+#    #+#             */
/*   Updated: 2019/03/08 21:07:48 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static int				ft_put_underline(int *i, t_mygv *mygv)
{
	if (*i == mygv->cur)
	{
		tputs(mygv->us, 1, &ft_putint);
		ft_printf("| %-*s |", mygv->max_len, mygv->av[*i]);
		tputs(mygv->ue, 1, &ft_putint);
		(*i)++;
		if (*i % (mygv->col / (mygv->max_len + 4)) == 0)
			write(2, "\n", 1);
		return (1);
	}
	return (0);
}

static int				ft_put_inver(int *i, t_mygv *mygv)
{
	if (mygv->chosen[*i] == 49)
	{
		if (*i == mygv->cur)
			tputs(mygv->us, 1, &ft_putint);
		tputs(SET_INVER, 1, &ft_putint);
		ft_printf("| %-*s |", mygv->max_len, mygv->av[*i]);
		tputs(UNSET_INVER, 1, &ft_putint);
		tputs(mygv->ue, 1, &ft_putint);
		(*i)++;
		if (*i % (mygv->col / (mygv->max_len + 4)) == 0)
			write(2, "\n", 1);
		return (1);
	}
	return (0);
}

void					ft_show_screen(t_mygv *mygv)
{
	int					i;

	i = 0;
	if (mygv == NULL)
		mygv = ft_get_mygv(NULL);
	tputs(mygv->cl, 1, &ft_putint);
	ft_get_tty_col_ros(mygv);
	while (mygv->av[i])
	{
		if (ft_put_inver(&i, mygv))
			continue ;
		if (ft_put_underline(&i, mygv))
			continue ;
		ft_printf("| %-*s |", mygv->max_len, mygv->av[i]);
		i++;
		if (i % (mygv->col / (mygv->max_len + 4)) == 0)
			write(2, "\n", 1);
	}
}
