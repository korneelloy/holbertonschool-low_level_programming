/**
 * _memcpy - copy n bytes from src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to be copies
 *
 * Return: same pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
