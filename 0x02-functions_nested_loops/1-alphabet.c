#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - "prints the alphabet"
 * void
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
