/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_choice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:22:19 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:23:23 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_make_choice(t_mygv *mygv)
{
	if (mygv->chosen[mygv->cur] == 48)
		mygv->chosen[mygv->cur] = 49;
	else
		mygv->chosen[mygv->cur] = 48;
	if (mygv->cur < (mygv->ac - 1))
		mygv->cur++;
}
