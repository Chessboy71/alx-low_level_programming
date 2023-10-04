#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - getlength of a string,
 *
 *@str : the character to initialize
 *
 *Return: void
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
 * _strdup - creates an array of chars,
 * and initializes it with a specific char
 *@str : size of the array
 *
 *Return: void
 */
char *_strdup(char *str)
{
	char *ret;
	int i = _strlen(str);
	char *s = (char *)malloc(_strlen(str) * sizeof(char) + 1);

	if (*str == NULL)
		return (NULL);
	if (s == 0)
		return (NULL);
	ret = s;
	while (i > 0)
	{
		*s = *str;
		s++;
		str++;
		i--;
	}
	return (ret);
}
