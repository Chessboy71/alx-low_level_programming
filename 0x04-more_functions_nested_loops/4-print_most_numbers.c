#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the first 10 numbers without 2 and 4
 *
 *
 * Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
