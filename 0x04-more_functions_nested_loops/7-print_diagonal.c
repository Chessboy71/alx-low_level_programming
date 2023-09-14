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
	int i;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		for (i = 0 ; i > n-1; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
