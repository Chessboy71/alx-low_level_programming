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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		_putchar('\n');
	}
}
