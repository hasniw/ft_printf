/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pct_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:45:06 by wahasni           #+#    #+#             */
/*   Updated: 2019/05/08 14:55:13 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pct_arg(t_printf *pf)
{
	int i;

	i = pf->min_length ? pf->min_length - 1 : 0;
	if (pf->flags & F_MINUS)
	{
		char_padding(pf, '%');
		min_padding(pf, ' ', i);
	}
	else
	{
		if (pf->flags & F_ZERO)
			min_padding(pf, '0', i);
		else
			min_padding(pf, ' ', i);
		char_padding(pf, '%');
	}
	return (1);
}
