#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
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

