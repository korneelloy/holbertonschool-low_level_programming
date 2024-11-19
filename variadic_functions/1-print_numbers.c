#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print given numbers
 * @separator: string between numbers
 * @n: number of variadic parameters
 *
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
