#include "main.h"
/**
 * create_file - creates file
 *
 * @filename : the filename to start
 * @text_content : the text to be output
 *
 * Return: IDK
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t res = 0, len;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	if (len)
		res = write(f, text_content, len);
	close(f);
	return (res == len ? 1 : -1);
}
