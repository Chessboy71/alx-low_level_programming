#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int fib[97];
	int i;

	fib[0] = 1;
	printf("%ld\n", fib[0]);
	fib[1] = 2;
	printf("%ld\n", fib[0]);

	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%ld\n", fib[i]);
	}
	return (0);
}
