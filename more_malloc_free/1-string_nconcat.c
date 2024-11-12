#include <stdlib.h>

/**
 * string_nconcat - concatenates strings s1 and n bytres of n2
 * @s1: pointner to first string
 * @s2: pointer to second string
 * @n: number of bytes of s2 to take into account
 *
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length = 0;
	char *pointer = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] != '\0'; i++)
		length++;
	if (length > n)
		length = n;
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	length++;
	pointer = malloc(length * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		pointer[i] = s1[i];
	}
	for (j = 0; (i + j) < (length - 1); j++)
	{
		pointer[i + j] = s2[j];
	}
	pointer[i + j + 1] = '\0';
	return (pointer);
}
