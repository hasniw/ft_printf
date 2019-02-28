#include <stdio.h>

int	main(void)
{
	int nbr = 10;

	printf("%o\n", nbr);
	printf("%x\n", nbr);
	printf("%X\n\n", nbr);

	printf("%#o\n", nbr); //
	printf("%#x\n", nbr); // PAS D'ESPACE AVEC #
	printf("%#X\n\n", nbr); //

	printf("%-#4o\n", nbr);
	printf("%-#4x\n", nbr);
	printf("%-#4X\n\n", nbr);

	printf("%#0006o\n", nbr);
	printf("%#0006x\n", nbr);
	printf("%#0006X\n\n", nbr);

	printf("%#10.5o\n", nbr);
	printf("%#10.5x\n", nbr);
	printf("%#10.5X\n\n", nbr);

	printf("%#-10.5o\n", nbr);
	printf("%#-10.5x\n", nbr);
	printf("%#-10.5X\n\n", nbr);

	printf("%#-10o\n", nbr);
	printf("%#-10x\n", nbr);
	printf("%#-10X\n\n", nbr);

	printf("%#.10o\n", nbr);
	printf("%#.10x\n", nbr);
	printf("%#.10X\n\n", nbr);

	return (0);
}
