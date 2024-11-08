#include <stdio.h>

/**
 * main - function entry point
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 is no error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
