#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			putchar((char)n);
			putchar((char)m);
			if (n != 8 && m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
