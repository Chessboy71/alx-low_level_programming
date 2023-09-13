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
	long int fib[];
	int i = 0;

	fib[0] = 1;
	fib[1] = 2;


	while (sum < 4000000)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i] % 2 == 0)
			sum = sum + fib[i];
	}
	printf("%ld \n", sum);
	return (0);
}
