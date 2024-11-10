#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc : number of arguments
 * @argv : arguments
 * Return: 0 if no error
*/

int main(int argc, char *argv[])
{
	int montant = 0, coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
		return (1);
	}
	montant = atoi(argv[1]);
	if (montant < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coins = montant / 25;
	montant = montant % 25;
	coins = coins + (montant / 10);
	montant = montant % 10;
	coins = coins + (montant / 5);
	montant = montant % 5;
	coins = coins + (montant / 2);
	montant = montant % 2;
	coins = coins + montant;
	printf("%d\n", coins);
	return (0);
}
