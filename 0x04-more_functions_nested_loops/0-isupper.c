#include "main.h"
#include <stdio.h>

/**
 * _isupper - prints the alphabet ten times
 * @c : integer
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
