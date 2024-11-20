#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print according to given format
 * @format: given format
 * @...: variadic parameters to be printed
 *
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list ap;
	void (*function)(va_list) = NULL;
	choix_t choises[4] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString}
	};
	char l;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		l = format[i];
		if (l == 'c' || l == 'i' ||	l == 'f' || l == 's')
		{
			j = 0;
			while (j < 4)
			{
				if (*choises[j].lettre == format[i])
					function = choises[j].print;
				j++;
			}
			function(ap);
		}
		i++;
	}
	printf("\b \b");
	printf("\b \b");
	printf("\n");
}

/**
 * printChar - printing a charactrer
 * @ap: the va list
 *
 * Return: no return
 */

void printChar(va_list ap)
{
	printf("%c, ", va_arg(ap, int));
}

/**
 * printInt - printing an integer
 * @ap: the va list
 *
 * Return: no return
 */

void printInt(va_list ap)
{
	printf("%d, ", va_arg(ap, int));
}

/**
 * printFloat - printing a floating number
 * @ap: the va list
 *
 * Return: no return
 */

void printFloat(va_list ap)
{
	printf("%f, ", va_arg(ap, double));
}

/**
 * printString - printing a string
 * @ap: the va list
 *
 * Return: no return
 */

void printString(va_list ap)
{
	char *string = va_arg(ap, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s, ", string);
}
