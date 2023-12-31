#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n : integer
 *
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i = n;
	int j;

	if (n <= 0)
		_putchar('\n');
	while (i > 0)
	{
		for (j = 0; j < n - i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i--;
	}
}
