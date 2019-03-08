/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back_screen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:30:07 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:30:20 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_back_screen(int signo)
{
	t_mygv				*mygv;

	mygv = ft_get_mygv(NULL);
	tcsetattr(0, TCSANOW, &mygv->oldt);
	tputs(mygv->te, 1, &ft_putint);
	tputs(mygv->ve, 1, &ft_putint);
	tputs(SCRN_RESER, 1, &ft_putint);
	if (signo == SIGTSTP)
	{
		signal(SIGTSTP, SIG_DFL);
		ioctl(STDERR_FILENO, TIOCSTI, "\x1A");
	}
}
