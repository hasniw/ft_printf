/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_arg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:44:58 by wahasni           #+#    #+#             */
/*   Updated: 2019/05/08 14:55:08 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		p_arg(t_printf *pf)
{
	void	*ptr;
	int		len;
	int		min;

	ptr = (void *)va_arg(pf->ap, void *);
	len = ft_nbrlen((uintmax_t)ptr, B_HEX);
	min = pf->min_length - 2 - len;
	if (ptr == 0 && pf->precision == -1)
		hash_padding(pf);
	else
	{
		if (pf->flags & F_MINUS)
		{
			hash_padding(pf);
			handle_buff(pf, ft_lltoa_base((uintmax_t)ptr, pf->base), 0, len);
			min_padding(pf, ' ', min);
		}
		else
		{
			min_padding(pf, ' ', min);
			hash_padding(pf);
			handle_buff(pf, ft_lltoa_base((uintmax_t)ptr, pf->base), 0, len);
		}
	}
	return (1);
}
