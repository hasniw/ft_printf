/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 21:03:17 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/24 17:45:17 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ---------------------------------- PT_FUNCT ------------------------------ */

t_conv g_conv[] =
{
	{"diouxX", &int_arg},
	{"DOU", &dou_arg},
	{"cC", &c_arg},
	{"sS", &s_arg},
	{"p", &p_arg},
	{"%", &pct_arg}
};

int		is_conv(t_printf *pf)
{
	int i;

	i = 0;
	while (i < 6)
	{
		if (find_conv(g_conv[i].c, pf->conv))
			return (i);
		i++;
	}
	return (-1);
}

int		conv_to_fct(t_printf *pf)
{
	int i;

	i = is_conv(pf);
	if (i != -1)
		g_conv[i].funct(pf);
	return (1);
}

int		get_conversion(t_printf *pf)
{
	printf("pf.format conv = %s\n", pf->format);
	if ((pf->conv = find_conv("sSpdDioOuUxXcCfbB%", *pf->format)) != 0)
	{
		pf->format++;
		if (pf->conv == 'o' || pf->conv == '0')
			pf->base |= B_OCT;
		else if (pf->conv == 'x' || pf->conv == 'X')
			pf->base |= B_HEX;
		else if (pf->conv == 'b' || pf->conv == 'B')
			pf->base |= B_BIN;
		else
			pf->base = B_DEC;
	}
	else
	{
		ft_printf("invalid conversion specifier '%c'\n", *pf->format);
		return (0);
	}
	return (1);
}

