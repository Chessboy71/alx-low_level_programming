#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the alphabet ten times
 *
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
