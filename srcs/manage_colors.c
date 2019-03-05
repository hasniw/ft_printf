/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_colors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <wahasni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 13:49:32 by wahasni           #+#    #+#             */
/*   Updated: 2019/03/05 10:22:50 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		put_color(t_printf *pf, int i)
{
	if (i < 8)
	{
		handle_buff(pf, "\033[1;3", 0, 5);
		char_padding(pf, (i + 48));
		char_padding(pf, 'm');
		pf->ret -= 7;
	}
	else if (i == 8 || i == 9)
	{
		handle_buff(pf, "\033[", 0, 2);
		char_padding(pf, ((i - 8) + 48));
		char_padding(pf, 'm');
		pf->ret -= 4;
	}
	else if (i == 10)
	{
		handle_buff(pf, "\033[", 0, 2);
		char_padding(pf, ((i - 6) + 48));
		char_padding(pf, 'm');
		pf->ret -= 4;
	}
	pf->ret = pf->ret < 0 ? 0 : pf->ret;
	return (1);
}

t_color g_color[] =
{
	{"black", &put_color},
	{"red", &put_color},
	{"green", &put_color},
	{"yellow", &put_color},
	{"blue", &put_color},
	{"violet", &put_color},
	{"cyan", &put_color},
	{"white", &put_color},
	{"reset", &put_color},
	{"bold", &put_color},
	{"underline", &put_color}
};

int		len_color(t_printf *pf)
{
	int i;

	i = 0;
	pf->format++;
	while ((*pf->format) && (*pf->format != '}'))
	{
		pf->format++;
		i++;
	}
	return (i);
}

int		is_color(t_printf *pf)
{
	int len;
	int i;

	i = 0;
	len = len_color(pf);
	while (i < 11)
	{
		if (ft_strnequ(g_color[i].color, pf->format - len, len))
			return (i);
		i++;
	}
	pf->format = pf->format - len - 2;
	return (-1);
}

int		color_to_fct(t_printf *pf)
{
	int i;

	i = is_color(pf);
	if (i != -1)
		g_color[i].funct(pf, i);
	pf->format++;
	return (i);
}
