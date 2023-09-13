#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the tables until 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0;
	int j;

	for (i ; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + j * i);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}

}
