#include "main.h"

/**
 * flip_bits - calculates the number of bits that flip
 *
 * @n : teh first number
 * @m: the second number
 *
 * Return: the number of bits that are different
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m;
	unsigned long int i = 0;

	while (xr)
	{
		if (xr & 1ul)
			i++;
		xr = xr >> 1;
	}
	return (i);
}
