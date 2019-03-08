/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 15:05:05 by draynor           #+#    #+#             */
/*   Updated: 2018/12/25 15:09:55 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_s_5(t_block_prntf *b, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(' ', 2);
		i++;
		b->r++;
	}
}

void		ft_print_s_4(t_block_prntf *b, char *str, size_t len, int i)
{
	if (b->toch)
		while (i < b->toch && str[i] != '\0')
		{
			ft_putchar_fd(str[i], 2);
			b->wdth--;
			b->r++;
			i++;
		}
	else
		while (i < (int)len && str[i] != '\0')
		{
			ft_putchar_fd(str[i], 2);
			b->wdth--;
			b->r++;
			i++;
		}
}
