#include "main.h"
#include <string.h>

/**
 * opening_file_error - handling errors (messages + exit codes) of program
 * @file: the pointer to the file we are dealin with
 * @error_code: error code
 * @buffer: buffer to be freed if something went wrong
 * @fd: file descriptor
 *
 * Return: no return
 */

void opening_file_error(char *file, int error_code, char *buffer, int fd)
{
	if (buffer != NULL)
		free(buffer);

	if (fd)
		close(fd);

	if (error_code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	else if (error_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	else if (error_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	else if (error_code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * cp - copy a text from one file to another (truncating)
 * @file_from: origine file of of the text
 * @file_to: destination file for text
 *
 * Return: no return
 */


void cp(char *file_from, char *file_to)
{
	char *buffer = NULL;
	int file_f = 0, file_t = 0;
	int size_read = 0, size_written = 0, closed_f = 0, closed_t = 0;

	if (file_from == NULL)
		opening_file_error(file_from, 98, buffer, file_f);

	file_f = open(file_from, O_RDONLY);
		if (file_f == -1)
			opening_file_error(file_from, 98, buffer, file_f);

	buffer = malloc(1024);
		if (buffer == NULL)
			opening_file_error(file_from, 98, buffer, file_f);

	size_read = read(file_f, buffer, 1024);
		if (size_read == -1)
			opening_file_error(file_from, 98, buffer, file_f);


	file_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
		if (file_t == -1)
			opening_file_error(file_to, 99, buffer, file_t);

	size_written = write(file_t, buffer, size_read);
		if (size_written == -1 || size_written != size_read)
			opening_file_error(file_to, 99, buffer, file_t);

	/**
	 * for (i = 0; size-written == 1024; i++)
	 * {
	 * 		i++;
	 * 		size-written = append(file_f, file_t, i);
	 * }
	 * s
	 */


	closed_f = close(file_f);
		if (closed_f == -1)
			opening_file_error(file_from, 100, buffer, file_f);

	closed_t = close(file_t);
		if (closed_t == -1)
			opening_file_error(file_to, 100, buffer, file_t);

}

/**
 * main - entry point to call the function
 * @argc: number of arguments to main / should be 3
 * @argv: arguments: should be : name exec. + origin + destination file name
 *
 * Return: no return
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		opening_file_error(NULL, 97, NULL, 0);

	cp(argv[1], argv[2]);

	return (0);
}
