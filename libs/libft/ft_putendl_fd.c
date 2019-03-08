/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 00:17:47 by draynor           #+#    #+#             */
/*   Updated: 2018/11/27 02:07:54 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;
	char	*ss;
	char	cc;

	if (!s)
		return ;
	cc = '\n';
	ss = (char *)s;
	i = 0;
	while (ss[i] != '\0')
	{
		write(fd, &ss[i], 1);
		i++;
	}
	write(fd, &cc, 1);
}
