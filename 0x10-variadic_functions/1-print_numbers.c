#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the numbers given seperated by a separator
 * @n: the number of ints
 * @separator: a char to separate numebrs
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	if (n == 0)
		return;
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%ud", va_arg(p, unsigned int));
		if (separator)
			printf("%c", *separator);
	}
	va_end(p);
}
