/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_signals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 00:18:40 by draynor           #+#    #+#             */
/*   Updated: 2019/03/09 00:18:43 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static void				ft_work_signal(int signo)
{
	if (signo == SIGTSTP)
		ft_back_screen(signo);
	if (signo == SIGCONT)
	{
		ft_init_screen(NULL);
		ft_show_screen(NULL);
		ft_work_input();
	}
}

void					ft_set_signals(void)
{
	signal(SIGINT, SIG_IGN);
	signal(SIGTSTP, ft_work_signal);
	signal(SIGCONT, ft_work_signal);
}
