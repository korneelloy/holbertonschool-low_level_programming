#include "main.h"


/**
 * read_textfile - reads textfile and prints it to std out
 * @filename: ptr to filename
 * @letters: nb of letters to be printed
 *
 * Return: actual number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file, size_read, size_written, closed;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);

	file = open(filename, O_RDONLY);
		if (file == -1)
		{
			free(buffer);
			return (0);
		}

	size_read = read(file, buffer, letters);
		if (size_read == -1)
		{
			free(buffer);
			return (0);
		}

	size_written = write(STDOUT_FILENO, buffer, size_read);
		if (size_written == -1 || size_read != size_written)
		{
			free(buffer);
			return (0);
		}

	free(buffer);

	closed = close(file);
		if (closed == -1)
			return (0);

	return (size_written);
}
