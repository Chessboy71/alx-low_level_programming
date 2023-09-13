#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet ten times
 * void
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}
