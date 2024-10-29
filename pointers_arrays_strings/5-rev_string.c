#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointeur vers charcarter or first char of string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		j = i;
/**	total = j + 1;*/

	for (; j > 0; j--)
	{
		printf("%c", s[j]);
		       /**	= s[total-j];*/
	}
}
