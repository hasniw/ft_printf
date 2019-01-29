
int	main(void)
{
	printf("NUMBER : %     -d\n", 14);
	printf("NUMBER : %     -d\n", -14);
	printf("NUMBER : %     -d\n", 0);

	printf("TEST             %E \n\n",  12.4711111111111111);
//	printf("TEST : |%          .d|  space\n\n", 0); --> Affiche ' '
	printf("yeah |%-5d| space\n\n", 12);
	printf("yohoo |%5d| space\n\n", 12);
	printf("ayaaa |%-5s| space\n\n", "wa");
	printf("ayaya |%5s| space\n\n", "wassim");
//	printf("\n\n\n\n\n4567 |%-10]5d| plip\n\n\n\n\n\n", 12);
//											--> ERREUR
//	printf("4567 |%10]5d| plip\n", 12);
	printf("BOUM |%10.5d| space\n\n", -12);
	printf("|%10d|\n", -12);
	printf("|%010d|\n", -12); 
	printf("|%-10.5d|\n", -12);
//	printf("|%-010.5d|\n", -12);
	
//	printf("\n\n\n\n\n4567 |%-10]5d| plip\n\n\n\n\n\n", 12);
//	printf("\n\n\n\n\n4567 |%-10]5d| plip\n\n\n\n\n\n", 12);
	return (0);
}
