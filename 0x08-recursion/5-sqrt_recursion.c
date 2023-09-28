#include "main.h"

/**
 * sqr - returns the square root
 * @n: the base number
 * @val: iterative
 *
 * Return: sqrt
 */
int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the square root
 * @n: the base number
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
