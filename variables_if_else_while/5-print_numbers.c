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

	for (i = 48; i < 58; i++)
	{
		ch = i;
		putchar(ch);
	}
	ch = 10;
	putchar(ch);
	return (0);
}
