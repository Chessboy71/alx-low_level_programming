#include "main.h"
#include <stdio.h>

/**
 * puts2 - gives the length
 * @str : A string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int n = 0;
	int i;
	char *p = str;

	while (*p != '\0')
	{
		n++;
		p++;
	}

	for (i = 0; i <= n / 2; i++)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
