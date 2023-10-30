#include "main.h"

/**
 * read_textfile - converts a binary to uint
 *
 * @b : the string
 * Return: the converted number or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t res;
	char buff[1024 * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if(f == -1)
		return (0);
	res = read(f, &buff[0], letters);
	res = write(STDOUT_FILENO, &buff[0], letters);
	close(f);
	return(res);
}
