#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry point
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 is no error
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0, iteration = 0;

	for (i = 1; i < argc; i++)
	{
		iteration = strtol(argv[i], '\0', 10);
		if (iteration == 0)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
				if (argv[i][j] != '0')
				{
					printf("Error\n");
					return (1);
				}
		}
		result += iteration;
	}
	printf("%d\n", result);
	return (0);
}
