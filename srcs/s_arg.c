/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_arg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 13:51:28 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/25 12:02:03 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		w_str(t_printf *pf)
{
	printf("salut w_char* %d\n", pf->flags);
	return (1);
}

int		s_arg(t_printf *pf)
{
	char *str;

	str = va_arg(pf->ap, char*);
	if (((pf->flags & S_LONG) == S_LONG) || (pf->conv == 'S'))
		w_str(pf);
	else
		while (*str)
			pf->buff[pf->index++] = *str++;
	return (1);
}
