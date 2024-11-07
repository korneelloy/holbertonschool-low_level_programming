#include "main.h"

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

	(void)argc;
	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);
	_putchar('\n');
	return (0);
}
