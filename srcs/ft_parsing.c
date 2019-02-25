/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:13:05 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/24 20:01:42 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	get_options(t_printf *pf)
{
	int res;

	printf("pf.format option = %s\n", pf->format);
	while ((res = find_char("-+0 #", *pf->format)) && pf->format++)
		pf->flags |= res;
	if (((pf->flags & F_ZERO) == F_ZERO) && ((pf->flags & F_MINUS) == F_MINUS))
		pf->flags &= ~F_MINUS;
	if (((pf->flags & F_PLUS) == F_PLUS) && ((pf->flags & F_SPACE) == F_SPACE))
		pf->flags &= ~F_SPACE;
}

void	get_min_length(t_printf *pf)
{
	printf("pf.format min_length = %s\n", pf->format);
	if (*pf->format >= 49 && *pf->format <= 57)
		pf->min_length = ft_atoi(pf->format);
	if (*pf->format == '*')
		pf->min_length = va_arg(pf->ap, int);
	while (ft_isdigit(*pf->format) > 0)
		pf->format++;
}

void	get_precision(t_printf *pf)
{
	printf("pf.format precision = %s\n", pf->format);
	if (*pf->format == '.')
	{
		pf->format++;
		pf->precision = ft_atoi(pf->format);
		if (*pf->format == '*')
			pf->precision = va_arg(pf->ap, int);
		while (ft_isdigit(*pf->format) > 0)
			pf->format++;
	}
}

void	get_specifiers(t_printf *pf)
{
	printf("pf.format specifiers = %s\n", pf->format);
	int res;

	if ((res = find_char("hlLjz", *pf->format)))
	{
		res <<= 5;
		pf->format++;
		if (((res == 32) && (*pf->format == 'h')) ||
				((res == 64) && (*pf->format == 'l')))
		{
			res <<= 5;
			pf->format++;
		}
		pf->flags |= res;
	}
}

int	parse_arg(t_printf *pf)
{
	get_options(pf);
	get_min_length(pf);
	get_precision(pf);
	get_specifiers(pf);
	if (!get_conversion(pf))
		return (0);
	conv_to_fct(pf);
	printf("pf.formatafter = %s\n", pf->format);
	printf("flags1 = %d\n", pf->flags);
	printf("min_length = %d\n", pf->min_length);
	printf("precision = %d\n", pf->precision);
	return (1);
}