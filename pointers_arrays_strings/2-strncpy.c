/**
 * _strncpy - copy (max n char) from src to dest
 * @dest : pointer to destination
 * @src : pointer to word to be copied
 * @n: max number of char of second word
 *
 * Return: pointer to concatenated string (=pointer orignal dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
