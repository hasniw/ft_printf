/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_arg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:44:58 by yabecret          #+#    #+#             */
/*   Updated: 2019/02/28 13:54:35 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		p_arg(t_printf *pf)
{
	char	*str;
	void	*ptr;

	len = voidlen(ptr);
	str = "0x";
	ptr = (void *)va_arg(pf, void *);
	if (ptr == 0 && pf->precision == -1)
		// Mettre str dans buff
	else
		handle_buff(pf, ft_lltoa_base(nb, pf), 0, len);
	return (1);
}
