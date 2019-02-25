/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahasni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:25:27 by wahasni           #+#    #+#             */
/*   Updated: 2019/02/24 19:33:38 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "../include/ft_printf.h"

void	*ft_memset(void *b, int c, size_t n);
size_t	ft_strlen(const char *str);
int		ft_strnequ(char	const *s1, char const *s2, size_t n);
int		ft_abs(int n);
void	ft_putstr(char const *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
int		ft_nbrlen(int nbr, int base);
int		find_char(char *str, char c);
int		find_conv(char *str, char c);
int		ft_atoi(const char *str);
int		ft_isspace(int c);

#endif
