/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:42:44 by wahasni           #+#    #+#             */
/*   Updated: 2019/01/29 16:28:43 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

# define BUF_SIZE 4096

typedef struct	s_flags
{
	int				minus : 1;
	int				plus : 1;
	int				hash : 1;
	int				zero : 1;
	int				space : 1;
	int				width;
	int				precision;
	int				size;
	char			conv;
	char			buf[BUF_SIZE];
}					t_flags;

#endif
