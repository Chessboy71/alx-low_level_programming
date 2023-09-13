#include "main.h"
#include <stdio.h>

/**
 * _islower - prints the alphabet ten times
 * @c : integer
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 65 && c < 91 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
