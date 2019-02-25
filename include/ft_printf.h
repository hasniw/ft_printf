/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 13:29:21 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/24 19:46:11 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h>

# define BUFF_SIZE 128

/* -------------------------------- FLAGS & SPEC ---------------------------- */

# define F_MINUS (1 << 0)  //  '-'
# define F_PLUS (1 << 1)   //  '+'
# define F_ZERO (1 << 2)   //  '0'
# define F_SPACE (1 << 3)  //  ' '
# define F_HASH (1 << 4)   //  '#'
# define S_SHORT (1 << 5)  //  'h'
# define S_LONG (1 << 6)   //  'l'
# define S_DOUBLE (1 << 7) //  'L'
# define S_INTMAX (1 << 8) //  'j'
# define S_SIZE_T (1 << 9) //  'z'
# define S_CHAR (1 << 10)  //  'hh'
# define S_LLONG (1 << 11) //  'll'

/* ----------------------------------- BASES ------------------------------- */

# define B_DEC 10
# define B_BIN (1 << 1)
# define B_OCT (1 << 3)
# define B_HEX (1 << 4)

/* ----------------------------------- STRUCT ------------------------------- */

typedef struct	s_printf
{
	int			flags;
	int			len;
	int			precision;
	int			min_length;
	int			base;
	int			padding;
	int			buffer_index;
	va_list 	ap;
	char 		buff[BUFF_SIZE];
	char		*format;
	char		conv;
}				t_printf;

typedef  int(*t_f_conv)(t_printf*);

typedef struct	s_conv
{
	char 		*c;
	t_f_conv	funct;
}				t_conv;

int				ft_printf(const char *format, ...);

/* ---------------------------------- OPTIONS ------------------------------- */

int				parse_arg(t_printf *pf);

/* ---------------------------------- CONVERS ------------------------------- */

int				get_conversion(t_printf *pf);
int				conv_to_fct(t_printf *pf);

/* ---------------------------------- PT_FUNCT ------------------------------ */

int				int_arg(t_printf *pf);
int				dou_arg(t_printf *pf);
int				c_arg(t_printf *pf);
int				s_arg(t_printf *pf);
int				p_arg(t_printf *pf);
int				pct_arg(t_printf *pf);

#endif

