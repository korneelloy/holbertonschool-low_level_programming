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

	for (i = 122; i > 96; i--)
	{
		ch = i;
		putchar(ch);
	}
	ch = 10;
	putchar(ch);
	return (0);
}
