/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:44:47 by yabecret          #+#    #+#             */
/*   Updated: 2019/02/28 13:09:27 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


long long	ft_cast(t_printf *pf)
{
	if ((pf->flags & S_INTMAX) == S_INTMAX)
		return (va_arg(pf->ap, intmax_t));
	else if ((pf->flags & S_SIZE_T) == S_SIZE_T)
		return (va_arg(pf->ap, ssize_t));
	else if ((pf->flags & S_LLONG) == S_LLONG)
		return (va_arg(pf->ap, long long));
	else if ((pf->flags & S_LONG) == S_LONG || pf->conv == 'D')
		return (va_arg(pf->ap, long));
	else if ((pf->flags & S_SHORT) == S_SHORT)
		return (va_arg(pf->ap, int));
	else if ((pf->flags & S_CHAR) == S_CHAR)
		return ((char)va_arg(pf->ap, int));
	return (va_arg(pf->ap, int));
}

int		int_arg(t_printf *pf)
{
	intmax_t	nb;
	uintmax_t 	new;

	new = 0;
	nb = ft_cast(pf);
	if (pf->conv == 'd' || pf->conv == 'i' || pf->conv == 'b')
		d_conv(pf, nb, new);
	if (pf->conv == 'o')
		d_conv(pf, nb, new);
	if (pf->conv == 'u')
		d_conv(pf, nb, new);
	if (pf->conv == 'x' || pf->conv == 'X')
		d_conv(pf, nb, new);
	return (1);
}
