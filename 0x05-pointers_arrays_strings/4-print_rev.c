#include "main.h"
#include <stdio.h>

/**
 * print_rev - gives the length
 * @s : A string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int n = 0;
	int i;
	char *p = str;

	while (*p != '\0')
	{
		n++;
		p++;
	};
	for (i = 0; i < n; i++)
	{
		_putchar(*(p + n - i));
	}
	_putchar('\n');
}