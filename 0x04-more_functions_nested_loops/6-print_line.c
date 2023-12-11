#include "main.h"
#include <stdio.h>

/**
 * print_line - prints the first 10 number 10 times
 * @n : integer
 *
 * Return: Always 0 (Success)
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
