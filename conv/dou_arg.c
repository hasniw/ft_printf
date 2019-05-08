/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dou_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:44:39 by wahasni           #+#    #+#             */
/*   Updated: 2019/05/08 14:53:57 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		dou_arg(t_printf *pf)
{
	intmax_t	nb;
	uintmax_t	unb;
	uintmax_t	new;

	new = 0;
	nb = 0;
	unb = 0;
	if (pf->conv == 'D')
		nb = ft_castint(pf);
	else
		unb = ft_castuint(pf);
	if (pf->conv == 'D')
		d_conv(pf, nb, new);
	if (pf->conv == 'O')
		o_conv(pf, unb);
	if (pf->conv == 'U')
		u_conv(pf, unb);
	return (1);
}
