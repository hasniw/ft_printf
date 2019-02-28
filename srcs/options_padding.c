/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 11:16:47 by yabecret          #+#    #+#             */
/*   Updated: 2019/02/27 22:35:20 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	padding(t_printf *pf, int prec, int len, uintmax_t nb)
{
	((pf->flags & F_PLUS) == F_PLUS) ? plus_padding(pf, '+') : 0;
	((pf->flags & F_SPACE) == F_SPACE) ? plus_padding(pf, ' ') : 0;
	pf->neg ? plus_padding(pf, '-') : 0;
	min_padding(pf, '0', prec);
	handle_buff(pf, ft_lltoa_base(nb, pf), 0, len);
}

void	min_padding(t_printf *pf, char c, int len)
{
	if (len > 0)
	{
		while (len--)
		{
			check_buff(pf);
			pf->buff[pf->index++] = c;
		}
	}
}

void	plus_padding(t_printf *pf, char c)
{
	check_buff(pf);
	pf->buff[pf->index++] = c;
}
