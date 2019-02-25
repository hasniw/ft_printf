/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:14:10 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/24 23:17:39 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_printf	f;

	ft_bzero(&f, sizeof(f));
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				break ;
			parsing(&f, format, args);
		}
		else
		{
			while (*format != '%' && *format)
				f->buffer[f->i] = format++;
		}
	}
	va_end(args);
	return (f->i);
}*/

int	ft_printf(const char *format, ...)
{
	t_printf	pf;

	ft_bzero(&pf, sizeof(pf));
	pf.format = (char*)format;
	va_start(pf.ap, format);
	while (*pf.format)
	{
		if (*pf.format == '%')
		{
			pf.format++;
			if (!*pf.format)
				break;
			parse_arg(&pf);
		}
		else
		{
			while (*pf.format != '%' && *pf.format)
				pf.buff[pf.buffer_index++] = *pf.format++;
		}
	}
	va_end(pf.ap);
	pf.buff[pf.buffer_index] = '\0';
	write(1, pf.buff, pf.buffer_index);
	return (pf.buffer_index);
}
