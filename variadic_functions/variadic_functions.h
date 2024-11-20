#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printChar(va_list ap);
void printInt(va_list ap);
void printFloat(va_list ap);
void printString(va_list ap);


/**
 * struct choix - structure of possible choices
 * @lettre: the char given to indicate format
 * @print: the pointer to the corresponding printing function
 */

typedef struct choix
{
	char *lettre;
	void (*print)(va_list);
} choix_t;

#endif
