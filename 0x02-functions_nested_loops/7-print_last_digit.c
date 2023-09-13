#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the alphabet ten times
 * @c : integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int r = c % 10;

	_putchar('0' + r);
	return (r);
}
