/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tty_col_row.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:27:44 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:28:00 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_get_tty_col_ros(t_mygv *mygv)
{
	struct winsize		w;

	ioctl(STDERR_FILENO, TIOCGWINSZ, &w);
	if (w.ws_col == 0 || w.ws_row == 0)
	{
		mygv->col = 64;
		mygv->row = 64;
	}
	else
	{
		mygv->col = w.ws_col;
		mygv->row = w.ws_row;
	}
}
