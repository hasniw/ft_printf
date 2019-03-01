/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:49:43 by yabecret          #+#    #+#             */
/*   Updated: 2019/03/01 00:31:30 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int main(int ac, char **av)
{
	intmax_t 	nb;
	int			nb1;
	char 		c;
	char 		*str;

	nb = atoll(av[1]);
	nb1 = atoi(av[1]);
	str = "salutcava";
	c = 'a';
	(void)ac;

/* ---------------------------------- STR_TEST ------------------------------ */
/*		ft_printf("----- STR_TEST -----\n");

		printf("real %%s      :%s\n", str);
		ft_printf("mine %%s      :%s\n", str);
		printf("real %%-s     :%-s\n", str);
		ft_printf("mine %%-s     :%-s\n", str);
		printf("real %%-10s   :%-10s\n", str);
		ft_printf("mine %%-10s   :%-10s\n", str);
		printf("real %%-10.2s :%-10.2s\n", str);
		ft_printf("mine %%-10.2s :%-10.2s\n", str);
		printf("real %%10s    :%10s\n", str);
		ft_printf("mine %%10s    :%10s\n", str);
		printf("real %%.10s   :%.10s\n", str);
		ft_printf("mine %%.10s   :%.10s\n", str);
		printf("real %%15.2s  :%15.2s\n", str);
		ft_printf("mine %%15.2s  :%15.2s\n", str);
		str = NULL;
		printf("NULL real %%15.2s  :%15.2s\n", str);
		ft_printf("NULL mine %%15.2s  :%15.2s\n", str);*/
//		printf("real %%ls     :%ls\n", L"salut"); //wchar_t

/* ----------------------------------- C_TEST ------------------------------- */
/*		ft_printf("----- C_TEST -----\n");

		printf("real %%c      :%c\n", c);
		ft_printf("mine %%c      :%c\n", c);
		printf("real %%-c     :%-c\n", c);
		ft_printf("mine %%-c     :%-c\n", c);
		printf("real %%-10c   :%-10c\n", c);
		ft_printf("mine %%-10c   :%-10c\n", c);
		printf("real %%10c    :%10c\n", c);
		ft_printf("mine %%10c    :%10c\n", c);*/
//		printf("real %%lc     :%lc\n", L'a'); //wint_t

/* ----------------------------------- D_TEST ------------------------------- */
/*	ft_printf("----- D_TEST -----\n");
	ft_printf("mine %%+d        :%+d\n", nb1);
	printf("real %%+d        :%+d\n", nb1);
	ft_printf("mine %%+0d       :%+0d\n", nb1);
	printf("real %%+0d       :%+0d\n", nb1);
	ft_printf("mine %%0d        :%0d\n", nb1);
	printf("real %%0d        :%0d\n", nb1);
	ft_printf("mine %%0.5d      :%0.5d\n", nb1);
	printf("real %%0.5d      :%0.5d\n", nb1);
	ft_printf("mine %%010d      :%010d\n", nb1);
	printf("real %%010d      :%010d\n", nb1);
	ft_printf("mine %%010.5d    :%010.5d\n", nb1);
	printf("real %%010.5d    :%010.5d\n", nb1);
	ft_printf("mine %%10d       :%10d\n", nb1);
	printf("real %%10d       :%10d\n", nb1);
	ft_printf("mine %%-10d      :%-10d\n", nb1);
	printf("real %%-10d      :%-10d\n", nb1);
	ft_printf("mine %% d        :% d\n", nb1);
	printf("real %% d        :% d\n", nb1);
	ft_printf("mine %% 10d      :% 10d\n", nb1);
	printf("real %% 10d      :% 10d\n", nb1);
	ft_printf("mine %% 10.5d    :% 10.5d\n", nb1);
	printf("real %% 10.5d    :% 10.5d\n", nb1);
	ft_printf("mine %%-10.5d    :%-10.5d\n", nb1);
	printf("real %%-10.5d    :%-10.5d\n", nb1);
	ft_printf("mine %%-10d      :%-10d\n", nb1);
	printf("real %%-10d      :%-10d\n", nb1);
	ft_printf("mine %%.10d      :%.10d\n", nb1);
	printf("real %%.10d      :%.10d\n", nb1);
	ft_printf("mine %%10.5d     :%10.5d\n", nb1);
	printf("real %%10.5d     :%10.5d\n", nb1);
	ft_printf("mine %%+10.5d    :%+10.5d\n", nb1);
	printf("real %%+10.5d    :%+10.5d\n", nb1);
	ft_printf("mine %%d         :%d\n", nb1);
	printf("real %%d         :%d\n", nb1);
	ft_printf("mine %%-d        :%-d\n", nb1);
	printf("real %%-d        :%-d\n", nb1);
	ft_printf("mine %%-10d      :%-10d\n", nb1);
	printf("real %%-10d      :%-10d\n", nb1);
	ft_printf("mine %%10d       :%10d\n", nb1);
	printf("real %%10d       :%10d\n", nb1);
	ft_printf("mine %%10.d      :%10.d\n", nb1);
	printf("real %%10.d      :%10.d\n", nb1);
	ft_printf("mine %%-10.d     :%10.d\n", nb1);
	printf("real %%-10.d     :%10.d\n", nb1);*/

/* --------------------------------- LLD_TEST ------------------------------- */
	/*	ft_printf("----- LLD_TEST -----\n");
		ft_printf("mine %%+d        :%+jd\n", nb);
		printf("real %%+d        :%+jd\n", nb);
		ft_printf("mine %%+0d       :%+0jd\n", nb);
		printf("real %%+0d       :%+0jd\n", nb);
		ft_printf("mine %%0d        :%0jd\n", nb);
		printf("real %%0d        :%0jd\n", nb);
		ft_printf("mine %%0.5d      :%0.5jd\n", nb);
		printf("real %%0.5d      :%0.5jd\n", nb);
		ft_printf("mine %%010d      :%010jd\n", nb);
		printf("real %%010d      :%010jd\n", nb);
		ft_printf("mine %%010.5d    :%010.5jd\n", nb);
		printf("real %%010.5d    :%010.5jd\n", nb);
		ft_printf("mine %%10d       :%10jd\n", nb);
		printf("real %%10d       :%10jd\n", nb);
		ft_printf("mine %%-10d      :%-10jd\n", nb);
		printf("real %%-10d      :%-10jd\n", nb);
		ft_printf("mine %% d        :% jd\n", nb);
		printf("real %% d        :% jd\n", nb);
		ft_printf("mine %% 10d      :% 10jd\n", nb);
		printf("real %% 10d      :% 10jd\n", nb);
		ft_printf("mine %% 10.5d    :% 10.5jd\n", nb);
		printf("real %% 10.5d    :% 10.5jd\n", nb);
		ft_printf("mine %%-10.5d    :%-10.5jd\n", nb);
		printf("real %%-10.5d    :%-10.5jd\n", nb);
		ft_printf("mine %%-10d      :%-10jd\n", nb);
		printf("real %%-10d      :%-10jd\n", nb);
		ft_printf("mine %%.10d      :%.10jd\n", nb);
		printf("real %%.10d      :%.10jd\n", nb);
		ft_printf("mine %%10.5d     :%10.5jd\n", nb);
		printf("real %%10.5d     :%10.5jd\n", nb);
		ft_printf("mine %%+10.5d    :%+10.5jd\n", nb);
		printf("real %%+10.5d    :%+10.5jd\n", nb);
		ft_printf("mine %%d         :%jd\n", nb);
		printf("real %%d         :%jd\n", nb);
		ft_printf("mine %%-d        :%-jd\n", nb);
		printf("real %%-d        :%-jd\n", nb);
		ft_printf("mine %%-10d      :%-10jd\n", nb);
		printf("real %%-10d      :%-10jd\n", nb);
		ft_printf("mine %%10d       :%10jd\n", nb);
		printf("real %%10d       :%10jd\n", nb);
		ft_printf("mine %%10.d      :%10.jd\n", nb);
		printf("real %%10.d      :%10.jd\n", nb);
		ft_printf("mine %%-10.d     :%10.jd\n", nb);
		printf("real %%-10.d     :%10.jd\n", nb);*/

		/*printf("% 05d\n", 24);
		ft_printf("% 05d\n", 24);
		printf("%20.ld et %.4hhi !\n", 0x11ffaa147, (signed char)-8);
		ft_printf("%20.ld et %.4hhi !\n", 0x11ffaa147, (signed char)-8);*/

	/*	printf("real %%08i  :%08i\n", -71);
		ft_printf("mine %%08i  :%08i\n", -71);
		printf("real %%08d  :%08d\n", -71);
		ft_printf("mine %%08d  :%08d\n", -71);
		printf("real :% 20.12ld et % 05D% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345);
		ft_printf("mine :% 20.12ld et % 05D% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345);
		printf("%%d     :%d\n", nb1);
		printf("%%10d   :%10d\n", nb1);
		printf("%%.d    :%.d\n", nb1);
		printf("%%.5d   :%.5d\n", nb1);
		printf("%%5d    :%5d\n", nb1);
		printf("%%10.5d :%10.5d\n", nb1);
		ft_printf("%%d     :%d\n", nb1);
		ft_printf("%%10d   :%10d\n", nb1);
		ft_printf("%%.d    :%.d\n", nb1);
		ft_printf("%%.5d   :%.5d\n", nb1);
		ft_printf("%%5d    :%5d\n", nb1);
		ft_printf("%%10.5d :%10.5d\n", nb1);*/
		printf("%-10.2%\n");
		printf("%x\n", 14);
		ft_printf("%x\n", 14);

		//printf("%.d\n", 0);
	return (0);
}
