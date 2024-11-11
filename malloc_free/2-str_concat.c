#include <stdlib.h>
/**
 * str_concat - concatinates 2 strings
 * @s1: 1st string
 * @s2: second string
 *
 * Return: pointer to new (concatinated) sting
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, lenght = 0;
	char *concatstr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lenght++;
	for (i = 0; s2[i] != '\0'; i++)
		lenght++;
	concatstr = malloc((lenght + 1) * sizeof(char));
	if (concatstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i++)
		concatstr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concatstr[i + j] = s2[j];
	concatstr[lenght + 1] = ('\0');
	return (concatstr);
}
