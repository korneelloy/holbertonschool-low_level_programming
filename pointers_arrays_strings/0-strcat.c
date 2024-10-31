/**
 * _strcat - concatenate and return 2 strings
 * @dest : pointer first word
 * @src : pointer second word
 *
 * Return: pointer to concatenated string (=pointer orignal dest)
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0, k;

	for (i = 0; dest[i] != '\0'; i++)
		j = i;
	for (k = 0; src[k] != '\0'; k++)
		dest[j + 1 + k] = src[k];
	return (dest);
}
