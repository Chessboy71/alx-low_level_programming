#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 00; i <= 99; i++)
	{
		for (int j = i + 1; j <= 99; j++)
		{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
