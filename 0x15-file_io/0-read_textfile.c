#include "main.h"

/**
 * read_textfile - converts a binary to uint
 *
 * @filename : the filename to start
 * @letters : the text to be output
 *
 * Return: the outputed text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t res;
	char buff[1024 * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	res = read(f, &buff[0], letters);
	res = write(STDOUT_FILENO, &buff[0], res);
	close(f);
	return (res);
}
