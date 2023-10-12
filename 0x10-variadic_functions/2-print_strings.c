#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the numbers given seperated by a separator
 * @n: the number of ints
 * @separator: a char to separate numebrs
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s != NULL)
			printf("%s", s);
		else if (s == NULL)
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
