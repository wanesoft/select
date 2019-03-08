/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:23:34 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:23:37 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_make_delete(t_mygv *mygv)
{
	int					i;

	if (mygv->ac == 0)
		return ;
	i = mygv->cur;
	mygv->ac--;
	while (mygv->av[i])
	{
		mygv->av[i] = mygv->av[i + 1];
		mygv->chosen[i] = mygv->chosen[i + 1];
		i++;
	}
	if (mygv->ac && mygv->cur == mygv->ac)
		mygv->cur--;
}
