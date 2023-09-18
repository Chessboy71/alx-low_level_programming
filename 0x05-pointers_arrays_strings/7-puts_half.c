#include "main.h"
#include <stdio.h>

/**
 * puts_half - gives the length
 * @str : A string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n = 0;
	int i;
	char *p = str;

	while (*p != '\0')
	{
		n++;
		p++;
	}

	for (i = 0; i < n / 2; i++)
	{
		_putchar(*(str + n / 2 - 1));
		str++;
	}
	if (*str != '\0')
	{
		_putchar(*(str + n / 2 - 1));
	}
	_putchar('\n');
}
