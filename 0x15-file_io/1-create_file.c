#include "main.h"

/**
 * read_textfile - converts a binary to uint
 *
 * @filename : the filename to start
 * @letters : the text to be output
 *
 * Return: the outputed text
 */

int create_file(const char *filename, char *text_content);
{
	int f, res;
	char buff[1024 * 8];

	if (!filename || !text_content)
		return (-1);
	f = open (filename, O_RDWR | O_CREAT);
	if (f == -1)
		return (-1);
	res = write(f, &buff[0], text_content);
}
