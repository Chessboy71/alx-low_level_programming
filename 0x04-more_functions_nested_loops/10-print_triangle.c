#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @n : integer
 *
 * Return: Always 0 (Success)
*/
void print_triangle(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');
	while (i <= n)
	{
		for (j = 0; j < n - i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
