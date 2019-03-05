/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_arg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:44:19 by wahasni           #+#    #+#             */
/*   Updated: 2019/03/05 10:20:36 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		w_charlen(wint_t wc)
{
	if (wc <= 0x7F)
		return (1);
	else if (wc <= 0x7FF)
		return (2);
	else if (wc <= 0xFFFF)
		return (3);
	else if (wc <= 0x1FFFFF)
		return (4);
	return (0);
}

char		*get_wchar(wint_t wc)
{
	static char	tab[5];

	ft_bzero(tab, 5);
	if (wc <= 0x7F)
		tab[0] = wc;
	else if (wc <= 0x7FF)
	{
		tab[0] = (wc >> 6) + 0xC0;
		tab[1] = (wc & 0x3F) + 0x80;
	}
	else if (wc <= 0xFFFF)
	{
		tab[0] = (wc >> 12) + 0xE0;
		tab[1] = ((wc >> 6) & 0x3F) + 0x80;
		tab[2] = (wc & 0x3F) + 0x80;
	}
	else if (wc <= 0x1FFFFF)
	{
		tab[0] = (wc >> 18) + 0xF0;
		tab[1] = ((wc >> 12) & 0x3F) + 0x80;
		tab[2] = ((wc >> 6) & 0x3F) + 0x80;
		tab[3] = (wc & 0x3F) + 0x80;
	}
	return (tab);
}

int			w_char(t_printf *pf, wint_t wc)
{
	int		min;
	int		i;

	if (!(i = w_charlen(wc)))
	{
		pf->ret = -1;
		return (1);
	}
	min = pf->min_length ? pf->min_length - i : 0;
	if (pf->flags & F_MINUS)
	{
		handle_buff(pf, get_wchar(wc), 0, i);
		min_padding(pf, ' ', min);
	}
	else
	{
		min_padding(pf, ' ', min);
		handle_buff(pf, get_wchar(wc), 0, i);
	}
	return (1);
}

int			c_conv(t_printf *pf)
{
	char	c;
	int		min;

	c = va_arg(pf->ap, int);
	min = pf->min_length ? pf->min_length - 1 : 0;
	if (pf->flags & F_MINUS)
	{
		char_padding(pf, c);
		min_padding(pf, ' ', min);
	}
	else
	{
		(pf->flags & F_ZERO) ? min_padding(pf, '0', min) :
		min_padding(pf, ' ', min);
		char_padding(pf, c);
	}
	return (1);
}

int			c_arg(t_printf *pf)
{
	wint_t	wc;

	if ((pf->flags & S_LONG) || (pf->conv == 'C'))
	{
		wc = va_arg(pf->ap, wint_t);
		w_char(pf, wc);
	}
	else
		c_conv(pf);
	return (1);
}
