#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the alphabet ten times
 * @c : integer
 *
 * Return: Always 0 (Success)
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
