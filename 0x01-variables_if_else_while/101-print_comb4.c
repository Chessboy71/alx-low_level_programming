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
	int o;

	for (n = 48; n < 56; n++)
	{
		for (m = n + 1; m < 57; m++)
		{
			for(o = m + 1; o <= 57; o++)
			{	
			putchar((char)n);
			putchar((char)m);
			putchar((char)o);
				if (n != 55 || m != 56 || 0 != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
