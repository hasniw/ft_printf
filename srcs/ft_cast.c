/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 01:51:55 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/25 12:01:25 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_cast(t_printf pf)
{
	if ((pf->flags & S_INTMAX) == S_INTMAX)
		return ((long long)va_arg(pf->ap, intmax_t));
	else if ((pf->flags & S_SIZE_T) == S_SIZE_T)
		return ((long long)va_arg(pf->ap, size_t));
	else if ((pf->flags & S_LLONG) == S_LLONG)
		return ((long long)va_arg(pf->ap, long long));
	else if ((pf->flags & S_LONG) == S_LONG)
		return ((long long)va_arg(pf->ap, long));
	else if ((pf->flags & S_SHORT) == S_SHORT)
		return ((long long)((short)va_arg(pf->ap, int)));
	else if ((pf->flags & S_CHAR) == S_CHAR)
		return ((long long)((char)va_arg(pf->ap, int)));
	return ((long long)va_arg(pf->ap, int));
}
