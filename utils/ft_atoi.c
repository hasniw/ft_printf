/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:41:26 by wahasni           #+#    #+#             */
/*   Updated: 2019/03/05 10:23:21 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

intmax_t	ft_atoi(char *s)
{
	intmax_t	res;
	int			i;

	i = 0;
	res = 0;
	while (s[i] && ft_isdigit(s[i]))
	{
		res += s[i] - 48;
		if (ft_isdigit(s[i + 1]))
			res *= 10;
		i++;
	}
	return (res);
}
