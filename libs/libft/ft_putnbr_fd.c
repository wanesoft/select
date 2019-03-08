/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 03:50:03 by draynor           #+#    #+#             */
/*   Updated: 2018/11/26 00:30:22 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int i, int fd)
{
	unsigned int	res;

	res = 0;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		res = i * -1;
	}
	else
		res = i;
	if (res >= 10)
		ft_putnbr_fd(res / 10, fd);
	ft_putchar_fd(res % 10 + 48, fd);
}
