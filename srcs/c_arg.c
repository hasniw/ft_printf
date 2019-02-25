/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_arg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 13:52:01 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/24 17:48:43 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		w_char(t_printf *pf)
{
	printf("salut w_char %d\n", pf->flags);
	return (1);
}

int		c_arg(t_printf *pf)
{
	if (((pf->flags & S_LONG) == S_LONG) || (pf->conv == 'C'))
		w_char(pf);
	else
		pf->buff[pf->buffer_index++] = va_arg(pf->ap, int);
	return (1);
}

