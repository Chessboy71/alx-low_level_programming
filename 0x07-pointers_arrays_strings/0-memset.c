#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: the pointer to the string
 * @b : the character to print
 * @n : number of times to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n != 0)
	{
		*str = b;
		n--;
		str++;
	}
	return (s);
}
