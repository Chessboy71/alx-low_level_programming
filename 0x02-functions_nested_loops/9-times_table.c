#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the tables until 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j * i < 10)
			{
			_putchar('0' + j * i);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else 
			{
			_putchar('0' + (int)(j * i / 10));
			_putchar('0' + (j * i) % 10);
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
