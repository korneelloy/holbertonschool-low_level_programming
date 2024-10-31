/**
 * _strncat - concatenate and return 2 strings with max n char of 2nd word
 * @dest : pointer first word
 * @src : pointer second word
 * @n: max number of char of second word
 *
 * Return: pointer to concatenated string (=pointer orignal dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0, k;

	for (i = 0; dest[i] != '\0'; i++)
		j = i;
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[j + 1 + k] = src[k];
	}
	return (dest);
}
