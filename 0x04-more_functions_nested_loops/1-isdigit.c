#include "main.h"
#include <stdio.h>

/**
 * __isdigit - prints the alphabet ten times
 * @c : integer
 *
 * Return: Always 0 (Success)
 */
int __isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
