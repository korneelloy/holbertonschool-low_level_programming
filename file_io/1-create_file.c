#include "main.h"
#include <string.h>

/**
 * create_file - create a file + write text + truncate if existant
 * @filename: name of the file
 * @text_content: string to be written to the file
 *
 * Return: 1 on succes / -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, size_written, closed;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (file == -1)
			return (-1);

	size_written = write(file, text_content, strlen(text_content));
		if (size_written == -1)
			return (-1);

	closed = close(file);
		if (closed == -1)
			return (-1);

	return (1);
}
