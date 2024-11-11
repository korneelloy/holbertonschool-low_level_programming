#include <stdlib.h>
/**
 * _strdup - copies a string and returns new pointer
 * @str: string
 *
 * Return: pointer to sting
 */

char *_strdup(char *str)
{
	int i, lenght = 0;
	char *newstr = NULL;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		lenght++;
	newstr = malloc((lenght + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i <= lenght; i++)
		newstr[i] = str[i];
	return (newstr);
}
