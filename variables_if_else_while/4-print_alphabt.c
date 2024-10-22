#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 is no errors
 */

int main(void)
{
	int i;
	char ch;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		ch = i;
		putchar(ch);
	}
	ch = 10;
	putchar(ch);
	return (0);
}
