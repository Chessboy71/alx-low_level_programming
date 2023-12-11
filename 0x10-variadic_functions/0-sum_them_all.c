#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the sum of all the variables
 * @n: the number of ints
 * Return: the sum of numebrs.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		count += va_arg(ptr, int);
	va_end(ptr);

	return (count);
}
