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
	long long int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;


	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		printf("%lld", fib[i]);

		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
