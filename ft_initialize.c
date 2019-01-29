/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:01:53 by wahasni           #+#    #+#             */
/*   Updated: 2019/01/26 21:15:14 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_param_initialize(t_flags param, char **format)
{
	// Initialise la struct
	ft_bzero(&structure, sizeof(t_flags));
	param->minus = 0;
	param->plus = 0;
	param->hash = 0;
	param->zero = 0;
	param->space = 0;
}
