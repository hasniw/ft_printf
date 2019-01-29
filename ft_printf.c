/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:14:10 by wahasni           #+#    #+#             */
/*   Updated: 2019/01/29 17:43:11 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_flags *f;

	ft_bzero(&f, sizeof(f));
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (!*format)
				break ;
			parsing(&f);
		}
		else
		{	while (*format != '%' && *format)
				f->buffer[f->i] = format++;
		}
	}
	va_end(args);
	return (f->i);
}
