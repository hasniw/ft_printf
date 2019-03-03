/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:09:48 by yabecret          #+#    #+#             */
/*   Updated: 2019/03/03 18:34:31 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ---------------------------------- PT_FUNCT ------------------------------ */

t_conv g_conv[] =
{
	{"diouxXb", &int_arg},
	{"DOUB", &dou_arg},
	{"cC", &c_arg},
	{"sS", &s_arg},
	{"p", &p_arg},
	{"%", &pct_arg},
	{"M", &man_arg}
};

int		is_conv(t_printf *pf)
{
	int i;

	i = 0;
	while (i < 7)
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
	if ((pf->conv = find_conv("sSpdDioOuUxXcCfbB%M", *pf->format)) != 0)
	{
		pf->format++;
		if ((pf->conv == 'o') || (pf->conv == 'O'))
			pf->base |= B_OCT;
		else if ((pf->conv == 'x') || (pf->conv == 'X') || (pf->conv == 'p'))
			pf->base |= B_HEX;
		else if ((pf->conv == 'b') || (pf->conv == 'B'))
			pf->base |= B_BIN;
		else
			pf->base = B_DEC;
	}
	else
	{
		not_specifier(pf);
		//ft_printf("invalid conversion specifier '%c'\n", *pf->format);
		return (0);
	}
	return (1);
}
