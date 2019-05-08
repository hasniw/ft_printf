/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:35:51 by wahasni           #+#    #+#             */
/*   Updated: 2019/05/08 14:57:23 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		isnan(long double nb)
{
	return (nb != nb);
}

int		isinf(long double nb)
{
	return (!isnan(nb) && isnan(nb - nb));
}

int		ft_abs(intmax_t nb)
{
	return (nb < 0 ? -nb : nb);
}

int		ft_max(intmax_t a, intmax_t b)
{
	return (a > b ? a : b);
}

int		ft_min(intmax_t a, intmax_t b)
{
	return (a > b ? b : a);
}
