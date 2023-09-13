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
	long int fib;
	int i;
	int num;
	int numm;


	num = 1;
	printf("%d\n", num);
	numm = 2;
	printf("%d\n", numm);

	for (i = 3; i <= 98; i++)
	{
		fib = num + numm;
		printf("%ld\n", fib);
		numm = fib;
		num = numm;
	}
	return (0);
}
