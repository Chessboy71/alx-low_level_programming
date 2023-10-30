#include "main.h"
/**
 * _strlen - gives the length
 * @str : A string
 *
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int n = 0;
	char *p = str;

	while (*p != '\0')
	{
		n++;
		p++;
	}
	return (n);
}

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
	ssize_t res = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (len)
		res = write(f, text_content, len);
	close(f);
	return (res == len ? 1 : -1);
}
