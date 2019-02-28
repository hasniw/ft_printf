/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:16:48 by yabecret          #+#    #+#             */
/*   Updated: 2019/02/27 23:04:01 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int					ft_nbrlen(uintmax_t nb, intmax_t base)
{
	int				len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= base;
		len += 1;
	}
	return (len);
}

char				*ft_lltoa_base(uintmax_t n, t_printf *pf)
{
	uintmax_t		n_size;
	static char		str[22];
	char			*strbase;
	uintmax_t		abs;
	int				maj;

	ft_bzero(str, 22);
	pf->maj = 0 ? (maj = 0) : (maj = 16);
	strbase = "0123456789abcdef0123456789ABCDEF";
	n_size = ft_nbrlen(n, pf->base);
	str[n_size] = '\0';
	abs = ABS(n);
	while (n_size--)
	{
		str[n_size] = strbase[(abs % pf->base) + maj];
		abs /= pf->base;
	}
	return (str);
}
