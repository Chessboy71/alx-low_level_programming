#include <stdio.h>
#include <math.h>

/**
 * find_largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of n.
 */

long long findLargestPrimeFactor(long long n) 
{
	long long largestPrime = -1;
	while (n % 2 == 0)
	{
		largestPrime = 2;
		n = n / 2;
	}
    // Now, n is an odd number
    // Check for prime factors from 3 onwards
    
	for (long long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0) {
			largestPrime = i;
			n = n / i;
		}
	}
	if (n > 1)
	{
		largestPrime = n;
	}
	return largestPrime;
}

int main()
{
	long long number = 612852475143;
	long long largestPrimeFactor = findLargestPrimeFactor(number);
	printf("%lld\n", largestPrimeFactor);
	return 0;
}
