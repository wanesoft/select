/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:18:15 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:18:28 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_make_move(t_mygv *mygv, unsigned long long input)
{
	int					pas_col;

	pas_col = mygv->col / (mygv->max_len + 4);
	if (input == K_UP && mygv->cur >= pas_col)
		mygv->cur -= pas_col;
	else if (input == K_R && mygv->cur < (mygv->ac - 1))
		mygv->cur++;
	else if (input == K_L && mygv->cur > 0)
		mygv->cur--;
	else if (input == K_D && ((mygv->cur + pas_col) < mygv->ac))
		mygv->cur += pas_col;
}
