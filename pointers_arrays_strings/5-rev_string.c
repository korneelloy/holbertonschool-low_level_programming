#include "main.h"
void switching(char *a, char *b);
int compter_nombre_char(char *s);

/**
 * rev_string - reverses a string
 * @s: pointeur vers chararter or first char of string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int nombre_char = compter_nombre_char(s);
	int i;

	for (i = 0; i < (nombre_char / 2) ; i++)
	{
		switching(&s[i], &s[nombre_char - i]);
	}
}

/**
 * compter_nombre_char - count number of char in a string
 * @s: pointeur vers character or first char of string
 *
 * Return: number of characters in the string
 */

int compter_nombre_char(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	j = i;
	return (j);
}

/**
 * switching - switch both parameters in array
 * @a: character in the beginning of the string
 * @b: character at the mirror place at the end of the string
 *
 * Return: no return
 */

void switching(char *a, char *b)
{
	char x;

	x = *a;
	*a = *b;
	*b = x;
}
