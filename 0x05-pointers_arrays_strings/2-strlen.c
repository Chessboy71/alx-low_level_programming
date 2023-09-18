#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 *@str : A string 
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int n = 0;
	char *p = str;
	while (*p != NULL)
	{
		n++;
		p++;
	}
	return (n);
}
