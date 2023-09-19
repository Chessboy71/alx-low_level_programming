#include "main.h"
#include <stdio.h>

/**
 * print_number - check the code
 *@n : integer
 *
 * Return: Always 0.
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
		_putchar(((unsigned int) n % 10) + '0');

	}
}
/**
 * print_array - check the code
 *@a : integer
 *@n : integer
 * Return: Always 0.
 */


void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		print_number(*(a + i));
		if (i != n - 1)
		{
			_putchar(",");
			_putchar(" ");
			}
	}
}


