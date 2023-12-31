#include "main.h"

/**
 * factorial - prints a string
 * @n: the string to get the length
 *
 * Return: nothing
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
