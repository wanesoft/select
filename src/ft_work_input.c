/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 21:17:18 by draynor           #+#    #+#             */
/*   Updated: 2019/03/08 21:18:23 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_work_input(void)
{
	t_mygv				*mygv;
	unsigned long long	input;

	input = 0;
	mygv = ft_get_mygv(NULL);
	while ((read(STDIN_FILENO, &input, 8)))
	{
		if (input == K_Q || input == K_ESC)
			ft_make_exit(mygv);
		else if (input == K_D || input == K_UP || input == K_L || input == K_R)
			ft_make_move(mygv, input);
		else if (input == K_DEL || input == K_BACKSP)
			ft_make_delete(mygv);
		else if (input == K_ENTER)
			ft_make_done(mygv);
		else if (input == K_SPACE)
			ft_make_choice(mygv);
		else
		{
			input = 0;
			continue ;
		}
		ft_show_screen(mygv);
		input = 0;
	}
}
