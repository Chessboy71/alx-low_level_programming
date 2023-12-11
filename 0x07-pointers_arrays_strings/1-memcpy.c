#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the pointer to the string of destination
 * @src : the pointer to the source string
 * @n : how many bytes to print
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *str = dest;

	while (n != 0)
	{
		*str = *src;
		n--;
		str++;
		src++;
	}
	return (dest);
}
