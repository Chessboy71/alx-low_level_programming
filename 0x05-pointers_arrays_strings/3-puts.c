#include "main.h"
#include <stdio.h>

/**
 * _puts - gives the length
 * @str : A string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int n = 0;
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
	}
}
