/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:13:05 by wahasni           #+#    #+#             */
/*   Updated: 2019/01/29 16:25:12 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_option(char c, t_flags *param)
{
	if (c == '-')
		return (param->minus = 1);
	else if (c == '0')
		return (param->zero = 1);
	else if (c == '+')
		return (param->plus = 1);
	else if (c == ' ')
		return (param->space = 1);
	else if (c == '#')
		return (param->hash = 1);
	return (0);
}

static int	ft_check_width(char **str, t_flags *param)
{
	// Voir si c'est un nombre 
	// Si oui --> mettre le nombre dans param->width
	// sinon si '*' --> mettre nombre de l'arg suivant dans param->width
	// Si non return (0)
	int	t;

	if (ft_isdigit(**str))
	{
		t = ft_atoi(*str);
		while (ft_isdigit(**str))
			++(*str);
		if (!check_dollar(str, t, param))
			param->width = t;
		return (1);
	}
	else if (**str == '*')
	{
		if ((params->width = (int)va_arg(argument, int)) < 0)
		{
			params->width = ft_abs(param->width);
			params->minus = 1;
		}
		++(*str);
		return (1);
	}
	return (0);
}

static int	ft_check_precision(char **index, t_flags *param)
{
	// Voir si on a un point, s'il y'en 
	// Si, oui --> Mettre le nombre dans param->precision
	if (**index == '.')
	{
		param->precision = 0;
		if (ft_isdigit(*++(*index)))
		{
			param->precision = ft_atoi(*index);
			while (ft_isdigit(**index))
				++(*index);
		}
		else if (**index == '*')
		{
			if ((param->precision = (int)va_arg(ap->ap_cur, int)) < 0)
				param->precision = 0;
			++(*index);
			return (1);
		}
		else
			param->precision = 0;
		return (1);
	}
	return (0);
}

static int	ft_check_size(char **index, t_flags param)
{
	// Voir s'il y'a 2/1 caracteres qui sont hh/ll/l/h 
	// Faire 4 if ou l'on compare, si vrai -> return (1/2/3/4)
	// Rajouter int si je veux rajouter bonus
	// Sinon return (0)
	if (**index == 'l')
		return (param->size = 1);
	else if (**index == 'h')
		return (param->size = 1);
	else if (ft_strnequ("ll", *index, 2))
		return (param->size = 3);
	else if (ft_strnequ("hh", *index, 2))
		return (param->size = 4);
	return (0);
}

int	ft_parsing(arg, t_flags f, char **format)
{
	while (**format == '#' || **format == '0'
			|| **format == '-' || **format == '+'
			|| **format == ' ' || **format == 'h'
			|| **format == 'l' || **format == '.'
			|| ft_isdigit(**format))
	{
		if (ft_check_option(f))
			**format++;
		else if (ft_check_width(f))
			;
		else if (ft_check_precision(f))
			;
		else if (ft_check_size(f))
			;
	}
	// Check et prendre Conv
	if (nombre d'incrementation == ft_strlen(**format))
		return (-1);
	return (0);
	// Parcourir l'argument 1 ou la chaine
	// Des qu'on lit un pourcentage -> Parcourir chaque fonction
	// Avancer
	//
	// Gerer la conversion a la fin, prendre le caractere et le mettre dans t_flags->conversion
}
