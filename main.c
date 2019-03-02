/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:49:43 by yabecret          #+#    #+#             */
/*   Updated: 2019/03/02 21:53:54 by wahasni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <locale.h>


int main(int ac, char **av)
{
	intmax_t 	nb;
	int			nb1;
	char 		c;
	char 		*str;

	//setlocale(LC_ALL, "en_US.utf8");
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
		/*printf("real %%-8.3o   :%#-8.3o\n", (unsigned int)nb1);
		ft_printf("mine %%-8.3o   :%#-8.3o\n", (unsigned int)nb1);

		ft_printf("mine :%-05d\n", -42);
		printf("real :%-05d\n", -42);

		ft_printf("mine :%hd\n", 32768);
		printf("real :%hd\n", 32768);

		ft_printf("mine :%0+5d\n", 42);
		printf("real :%0+5d\n", 42);

		ft_printf("mine :%-05o\n", 2500);
		printf("real :%-05o\n", 2500);

		ft_printf("mine :%+10.5d\n", 4242);
		printf("real :%+10.5d\n", 4242);

		ft_printf("mine :%hU\n", 4294967296);
		printf("real :%hU\n", 4294967296);
		//ft_printf("%s", "abc");
		//ft_printf("%");
		printf("{%05.c}\n", 0);
		ft_printf("{%05.c}\n", 0);
		printf("%.d\n", 0);*/

		/*ft_printf("mine euro: %C\n", (wint_t)8364);
		printf("real euro: %lc\n", (wint_t)8364);
		ft_printf("mine :%C\n", 0xbffe);
		printf("real :%C\n", 0xbffe);
		printf("{%03c}", 0);
		ft_printf("{%03c}", 0);*/
		/*printf("ret = %d\n", printf("%S\n", L"米"));
		printf("\n");
		printf("ret = %d\n", ft_printf("%S\n", L"米"));
		printf("\n\n");
		printf("ret = %d\n", printf("%S\n", L"我是一只猫。"));
		printf("\n");
		printf("ret = %d\n", ft_printf("%S\n", L"我是一只猫。"));*/
	/*	printf("%d\n", printf("real :{%10R}\n"));
		printf("%d\n", ft_printf("mine :{%10R}\n"));
		printf("%d\n", printf("real :%\n"));
		printf("%d\n", ft_printf("mine :%\n"));
		printf("%d\n", printf("real :% Zoooo\n"));
		printf("%d\n", ft_printf("mine :% Zoooo\n"));
		printf("%d\n", printf("real :{%}\n"));
		printf("%d\n", ft_printf("mine :{%}\n"));
		printf("{%03c}\n", 0);
		ft_printf("{%03c}\n", 0);
		printf("real :{%05s}\n", "abc");
		ft_printf("mine :{%05s}\n", "abc");
		printf("real :{%-15Z}\n", 123);
		ft_printf("mine :{%-15Z}\n", 123);*/
//		printf("{%05p}", 0);
//		printf("%.5p", 0);
//		printf("%.0p, %.p", 0, 0);
		printf("real :{%3*d}\n", 0, 0);
		ft_printf("mine :{%3*d}\n", 0, 0);
		printf("real :{%*3d}\n", 0, 0);
		ft_printf("mine :{%*3d}\n", 0, 0);
		printf("real :{%*3d}\n", 5, 0);
		ft_printf("mine :{%*3d}\n", 5, 0);
		printf("real :{%3*p}\n", 10, 0);
		ft_printf("mine :{%3*p}\n", 10, 0);
		printf("real :{%.*s}\n", 0, "42");
		ft_printf("mine :{%.*s}\n", 0, "42");
		printf("real :{%.0s}\n", "42");
		ft_printf("mine :{%.0s}\n", "42");
	return (0);
}
