#include "main.h"
#include <stdio.h>

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
