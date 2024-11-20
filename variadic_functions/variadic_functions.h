#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>


int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);
void printChar(va_list);
void printInt(va_list);
void printFloat(va_list);
void printString(va_list);


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
