#include <stdio.h>

int	main(void)
{
	printf("taille d'un int : %lu bytes\n", (sizeof(int));
	printf("taille d'un unsigned long : %lu bytes\n", sizeof(unsigned long));
	printf("taille d'un long : %lu bytes\n", sizeof(long));
	printf("taille d'un float : %lu bytes\n", sizeof(float));
	printf("taille d'un double : %lu bytes\n", sizeof(double));
}
