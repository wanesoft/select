# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: draynor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/09 00:13:35 by draynor           #+#    #+#              #
#    Updated: 2019/03/09 00:13:50 by draynor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_select
FLAGS = -Wall -Wextra -Werror -ltermcap

all: $(NAME)

$(NAME):
	make -C libs/ft_printf/ > /dev/null 2>&1
	make -C libs/libft/ > /dev/null 2>&1
	gcc $(FLAGS) src/*.c libs/libft/libft.a libs/ft_printf/libftprintf.a -o $(NAME)

clean:
	make -C libs/libft/ clean > /dev/null 2>&1
	make -C libs/ft_printf/ clean > /dev/null 2>&1

fclean: clean
	make -C libs/libft/ fclean > /dev/null 2>&1
	make -C libs/ft_printf/ fclean > /dev/null 2>&1
	rm -f $(NAME) > /dev/null 2>&1

re:	fclean all

test:
	rm $(NAME)
	gcc $(FLAGS_TEST) src/*.c libs/libft/libft.a libs/ft_printf/libftprintf.a -o $(NAME)
