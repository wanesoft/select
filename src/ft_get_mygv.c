/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mygv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:29:56 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:30:00 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

t_mygv					*ft_get_mygv(t_mygv *mygv)
{
	static t_mygv		*mygv_here;

	if (mygv == NULL)
		return (mygv_here);
	else
		mygv_here = mygv;
	return (0);
}
