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

	for (n = 48; n <= 57; n++)
		putchar((char)n);

	for (m = 97; m <= 102; m++)
		putchar((char)m);

	putchar('\n');
	return (0);
}
