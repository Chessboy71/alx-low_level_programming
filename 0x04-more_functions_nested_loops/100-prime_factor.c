#include <stdio.h>
#include <math.h>

/**
 * findLargestPrimeFactor - Finds the largest prime factor of a number.
 * main - makes the code
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of n.
 */

long findLargestPrimeFactor(long n)
{
	long i;
	long largestPrime = -1;

	while (n % 2 == 0)
	{
		largestPrime = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largestPrime = i;
			n = n / i;
		}
	}
	if (n > 1)
	{
		largestPrime = n;
	}
	return (largestPrime);
}
/**
 * main - makes the code
 *
 * Return: 0 always true
 */
int main(void)
{
	long number = 612852475143;
	long largestPrimeFactor = findLargestPrimeFactor(number);

	printf("%ld\n", largestPrimeFactor);
	return (0);
}
