/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_screen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:27:14 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:27:18 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_init_screen(t_mygv *mygv)
{
	if (mygv == NULL)
		mygv = ft_get_mygv(NULL);
	mygv->newt.c_lflag &= ~(ECHO);
	mygv->newt.c_lflag &= ~(ICANON);
	mygv->newt.c_cc[VMIN] = 1;
	mygv->newt.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &mygv->newt);
	tputs(COLOR_BCKGRND, 1, &ft_putint);
	tputs(mygv->ti, 1, &ft_putint);
	tputs(mygv->ti, 1, &ft_putint);
}
