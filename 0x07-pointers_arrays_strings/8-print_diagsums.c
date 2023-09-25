#include "main.h"

/**
 * print_number - a function that claculates and prints the sum of diagonal of a matrix
 * @n : integer
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}
		_putchar(((unsigned int)n % 10) + '0');
	}
}

/**
 * print_diagsums - a function that claculates and prints the sum of diagonal of a matrix
 * @a : the board to print
 * @size : the size of the diagonal
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	unsigned int d1;
	unsigned int d2;
	int i = 0;
	while (i < size)
	{
		d1 += a[i][i];
		d2 += a[i][size - i];
	}

	print_number(d1); 
	_putchar (',');
	_putchar(' ');
	print_number(d2);
}
