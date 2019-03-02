#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main (void)
{
	int nb;
	char c;
	char *str;

	nb = 42;
	str = "salut";
	c = 'a';

/* ---------------------------------- STR_TEST ------------------------------ */
//	printf("----- STR_TEST -----\n");
	/*printf("plus           :%+s\n", str);  //undefined behavior
	printf("zero           :%0s\n", str);  //undefined behavior
	printf("space          :% s\n", str);  //undefined behavior
	printf("hash           :%#s\n", str);  //undefined behavior

	printf("%%s      :%s\n", str);
	printf("%%-s     :%-s\n", str);
	printf("%%-10s   :%-10s\n", str);
	printf("%%-10.2s :%-10.2s\n", str);
	printf("%%10s    :%10s\n", str);
	printf("%%.10s   :%.10s\n", str);
	printf("%%15.2s  :%15.2s\n", str);
	printf("%%ls     :%ls\n", L"salut"); //wchar_t*
	printf("Il faut donc gerer '-, min_length, precision'\n");*/

/* ----------------------------------- C_TEST ------------------------------- */
//	printf("----- C_TEST -----\n");
	/*printf("plus           :%+c\n", c);  //undefined behavior
	printf("zero           :%0c\n", c);  //undefined behavior
	printf("space          :% c\n", c);  //undefined behavior
	printf("hash           :%#c\n", c);  //undefined behavior
	printf("%%-10.2c       :%-10.2c\n", c);  //undefined behavior
	printf("%%.10c         :%.10c\n", c);  //undefined behavior
	printf("%%15.2c        :%15.2c\n", c);  //undefined behavior

	printf("%%c      :%c\n", c);
	printf("%%-c     :%-c\n", c);
	printf("%%-10c   :%-10c\n", c);
	printf("%%10c    :%10c\n", c);
	printf("%%lc     :%lc\n", L'a'); //wint_t
	printf("Il faut donc gerer '-, min_length'\n");*/

/* ----------------------------------- D_TEST ------------------------------- */
	printf("----- D_TEST -----\n");
	//printf("hash        :%#d\n", nb);  //undefined behavior
	//printf("%%+0-d      :%+0-d\n", nb); //flag '0' is ignored when flag '-' is present
	//printf("%%+0- d     :%+- d\n", nb); //flag ' ' is ignored when flag '+' is present

	printf("%%+d        :%+d\n", nb);
	printf("%%+0d       :%+0d\n", nb);
	printf("%%0d        :%0d\n", nb);
	printf("%%0.5d      :%0.5d\n", nb);
	printf("%%010d      :%010d\n", nb);
	printf("%%010.5d    :%010.5d\n", nb);
	printf("%%10d       :%10d\n", nb);
	printf("%%-10d      :%-10d\n", nb);
	printf("%% d        :% d\n", nb);
	printf("%% 10d      :% 10d\n", nb);
	printf("%% 10.5d    :% 10.5d\n", nb);
	printf("%%-10.5d    :%-10.5d\n", nb);
	printf("%%-10d      :%-10d\n", nb);
	printf("%%.10d      :%.10d\n", nb);
	printf("%%10.5d     :%10.5d\n", nb);
	printf("%%+10.5d    :%+10.5d\n", nb);
	printf("%%d         :%d\n", nb);
	printf("%%-d        :%-d\n", nb);
	printf("%%-10d      :%-10d\n", nb);
	printf("%%10d       :%10d\n", nb);
	nb = -nb;
	printf("nb = -nb\n");
	printf("%%+d        :%+d\n", nb);
	printf("%%+0d       :%+0d\n", nb);
	printf("%%0d        :%0d\n", nb);
	printf("%%0.5d      :%0.5d\n", nb);
	printf("%%010d      :%010d\n", nb);
	printf("%%010.5d    :%010.5d\n", nb);
	printf("%%10d       :%10d\n", nb);
	printf("%%-10d      :%-10d\n", nb);
	printf("%% d        :% d\n", nb);
	printf("%% 10d      :% 10d\n", nb);
	printf("%% 10.5d    :% 10.5d\n", nb);
	printf("%%-10.5d    :%-10.5d\n", nb);
	printf("%%-10d      :%-10d\n", nb);
	printf("%%.10d      :%.10d\n", nb);
	printf("%%10.5d     :%10.5d\n", nb);
	printf("%%+10.5d    :%+10.5d\n", nb);
	printf("%%d         :%d\n", nb);
	printf("%%-d        :%-d\n", nb);
	printf("%%-10d      :%-10d\n", nb);
	printf("%%10d       :%10d\n", nb);
	//printf("%%lc     :%ld\n", L'a'); //wint_t
	printf("Il faut donc gerer '+, 0, space, minus, min_length, precision'\n");
	return (0);
}
