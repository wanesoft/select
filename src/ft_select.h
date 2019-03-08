/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: draynor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 21:17:03 by draynor           #+#    #+#             */
/*   Updated: 2019/03/08 21:17:05 by draynor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

# include <termios.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <term.h>
# include <sys/ioctl.h>
# include <signal.h>

# define K_SPACE		32
# define K_ESC			27
# define K_Q			113
# define K_D			4348699
# define K_UP			4283163
# define K_R			4414235
# define K_L			4479771
# define K_ENTER		10
# define K_DEL			2117294875
# define K_BACKSP		127

# define COLOR_BCKGRND	"\033[40;100m"
# define SCRN_RESER		"\033[0m"
# define SET_INVER		"\033[7m"
# define UNSET_INVER	"\033[27m"

typedef struct			s_mygv
{
	int					ac;
	char				**av;
	struct termios		newt;
	struct termios		oldt;
	size_t				max_len;
	int					cur;
	int					row;
	int					col;
	char				*chosen;
	char				*ti;
	char				*vi;
	char				*te;
	char				*ve;
	char				*us;
	char				*ue;
	char				*cl;
	int					i;
}						t_mygv;

void					ft_select(int ac, char **av);
void					ft_init_mygv(t_mygv *mygv, int ac, char **av);
void					ft_init_screen(t_mygv *mygv);
void					ft_back_screen(int signo);
void					ft_work_input(void);
void					ft_make_move(t_mygv *mygv, unsigned long long input);
void					ft_make_delete(t_mygv *mygv);
void					ft_make_done(t_mygv *mygv);
void					ft_make_exit(t_mygv *mygv);
void					ft_make_choice(t_mygv *mygv);
void					ft_show_screen(t_mygv *mygv);
void					ft_set_signals(void);
void					ft_del_mygv(t_mygv *mygv);
t_mygv					*ft_get_mygv(t_mygv *mygv);

int						ft_putint(int i);
void					ft_get_tty_col_ros(t_mygv *mygv);
char					*ft_prep_chosen(int len);
size_t					ft_get_max_len(char **av);

int						ft_printf(const char *format, ...);
void					ft_putstr_fd(char *str, int fd);
size_t					ft_strlen(const char *s);

#endif
