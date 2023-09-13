#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints the alphabet ten times
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;

	while (hours < 60)
	{
		while (mins < 60)
		{
			_putchar('0' + (int)hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + (int)mins / 10);
			_putchar('0' + mins % 10);
			mins++;
		}
		hours++;
	}
	return (0);
}
