/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:51:08 by wahasni           #+#    #+#             */
/*   Updated: 2019/03/05 10:21:23 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		not_specifier(t_printf *pf)
{
	int i;

	i = pf->min_length ? pf->min_length - 1 : 0;
	if (pf->flags & F_MINUS)
	{
		pf->conv ? char_padding(pf, pf->conv) : 0;
		min_padding(pf, ' ', i);
	}
	else
	{
		if (pf->flags & F_ZERO)
			min_padding(pf, '0', i);
		else
			min_padding(pf, ' ', i);
		pf->conv ? char_padding(pf, pf->conv) : 0;
	}
	return (1);
}
