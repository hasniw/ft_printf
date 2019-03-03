/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_arg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:45:10 by yabecret          #+#    #+#             */
/*   Updated: 2019/03/03 13:24:04 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		w_str(t_printf *pf)
{
	wchar_t *str;

	str = va_arg(pf->ap, wchar_t*);
	if (!str)
		handle_buff(pf, "(null)", 0, 6);
	else
	{
		while (*str)
		{
			check_buff(pf);
			w_char(pf, *str);
			str++;
		}
	}
	return (1);
}

int		s_conv(t_printf *pf)
{
	char	*str;
	int		len;
	int		min;

	str = va_arg(pf->ap, char*);
	len = str ? ft_strlen(str) : 6;
	if (pf->precision && pf->precision < len)
		len = (pf->precision == -1) ? 0 : pf->precision;
	min = pf->min_length ? pf->min_length - len : 0;
	if (pf->flags & F_MINUS)
	{
		str ? handle_buff(pf, str, 0, len) : handle_buff(pf, "(null)", 0, len);
		min_padding(pf, ' ', min);
	}
	else
	{
		(pf->flags & F_ZERO) ? min_padding(pf, '0', min) : min_padding(pf, ' ', min);
		str ? handle_buff(pf, str, 0, len) : handle_buff(pf, "(null)", 0, len);
	}
	return (1);
}

int		s_arg(t_printf *pf)
{
	if ((pf->flags & S_LONG) || (pf->conv == 'S'))
		w_str(pf);
	else
		s_conv(pf);
	return (1);
}
