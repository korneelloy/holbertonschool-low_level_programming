#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text to existing file
 * @filename: name of the file
 * @text_content: string to be written to the file
 *
 * Return: 1 on succes / -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, size_written, closed;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
		if (file == -1)
			return (-1);

	if (text_content != NULL)
	{
		size_written = write(file, text_content, strlen(text_content));
			if (size_written == -1)
			{
				close(file);
				return (-1);
			}
	}

	closed = close(file);
		if (closed == -1)
			return (-1);

	return (1);
}
