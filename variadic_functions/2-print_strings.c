#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print given strings
 * @separator: string between strings
 * @n: number of variadic parameters
 * @...: variadic parametsr / strings
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *string;

	va_start(ap, n);

	while (i < n)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
