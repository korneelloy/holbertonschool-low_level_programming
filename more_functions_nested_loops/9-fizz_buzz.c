#include <stdio.h>

void fizz_buzz(void);

/**
 * main - entry point
 *
 * Return: 0 is no errors
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints numberts 1 to 100, mult of 3>Fizz + mult of 5>Buzz
 *
 * Return: no return
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
}
