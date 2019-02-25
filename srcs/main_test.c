#include <stdio.h>
#include <stdlib.h>
#include "../include/ft_printf.h"

int main (int ac, char **av)
{
	int nb;
	char c;
	char *str;

	nb = atoi(av[1]);
	str = "salut";
	c = 'a';


	if (ac)
	{
		printf("%.0d\n", nb);
		printf("%5d\n", nb);
		//printf("%+ 5.2d\n", nb); //error
		printf("%- 5d\n", nb);
		printf("%- 5d\n", nb);
//		printf("%+ 5d\n", nb); //error
//		printf("%+- 5d\n", nb); //error
		printf("%0+10d\n", nb);
		printf("%010d\n", nb);
//		printf("%010s\n", str); //error
		printf("%+-+5d\n", nb);
//		printf("%+05lld\n", nb);
		printf("%-10c\n", c);
	}
	return (0);
}

