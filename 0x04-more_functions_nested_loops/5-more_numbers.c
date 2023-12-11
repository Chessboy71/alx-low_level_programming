#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the first 10 number 10 times
 *
 *
 * Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j / 10 >= 1)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
