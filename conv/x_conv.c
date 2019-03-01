/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 23:56:01 by wahasni           #+#    #+#             */
/*   Updated: 2019/03/01 01:22:44 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			x_conv(t_printf *pf, uintmax_t unb)
{
	int		len;
	int		min;
	int		prec;

	len = ft_nbrlen(unb, pf->base);
	if (pf->precision == -1  && unb == 0)
		len = 0;
	
	prec = check_zero(pf, len);
	min = pf->min_length ? (pf->min_length - prec - len) : 0;
	if (((pf->flags & F_PLUS) == F_PLUS) || ((pf->flags & F_SPACE) == F_SPACE) || pf->neg)
		min -= 1;
	if ((pf->flags & F_MINUS) == F_MINUS)
	{
		if ((pf->flags & F_HASH) == F_HASH)
			padding_x(pf, prec, len, unb);
		else
			padding(pf, prec, len, unb);
		min_padding(pf, ' ', min);
	}
	else
	{
		min_padding(pf, ' ', min);
		if ((pf->flags & F_HASH) == F_HASH)
			padding_x(pf, prec, len, unb);
		else
			padding(pf, prec, len, unb);
	}
	return (1);
}
