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
	int i, result = 0, iteration = 0;

	for (i = 1; i < argc; i++)
	{
		iteration = strtol(argv[i], '\0', 10);
		printf("iteration %d\n", iteration);
		result += iteration;
		iteration = 0;
	}
	printf("%d\n", result);
	return (0);
}
