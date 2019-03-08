/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 15:08:00 by draynor           #+#    #+#             */
/*   Updated: 2019/01/24 07:05:13 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_strlen_hit(char *str)
{
	int		j;
	int		i;
	int		z;
	int		f;

	i = 0;
	j = 0;
	z = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isprint2(str[i])))
		{
			j++;
			while (!(ft_isprint2(str[i])) && str[i] != '\0')
			{
				i++;
			}
			z++;
			continue;
		}
		j++;
		i++;
	}
	f = (i - j) / 2 + j - 1;
	return (j == i ? j : f);
}

void		ft_print_t(t_block_prntf *b, char *str)
{
	int		len;

	len = ft_strlen_hit(str);
	ft_putstr(str);
	b->wdth -= len;
	while (b->wdth > 0)
	{
		write(1, "\t", 1);
		b->wdth -= 8;
	}
}

void		ft_work_t_2(t_block_prntf *b, const char *format, int i)
{
	char	*str;

	str = va_arg(b->ap, char *);
	if (format[i] == '.')
	{
		i++;
		b->toch = ft_atoi(&format[i]);
	}
	else if (format[i] >= '1' && format[i] <= '9')
	{
		b->wdth = ft_atoi(&format[i]);
		if (b->toch)
		{
			while (format[i] != '.')
				i++;
			i++;
			b->toch = ft_atoi(&format[i]);
		}
	}
	ft_print_t(b, str);
}

void		ft_work_t(t_block_prntf *b, const char *format)
{
	int		i;

	i = b->i;
	while (format[i] != '%')
	{
		if (format[i] == '*')
			b->wdth = va_arg(b->ap, int);
		i--;
	}
	while (!(format[i] >= '1' && format[i] <= '9')
			&& format[i] != b->mod && format[i] != '.')
	{
		if (format[i] == '0')
			b->fl.z = 1;
		i++;
	}
	ft_work_t_2(b, format, i);
}
