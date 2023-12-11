#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the alphabet ten times
 * @c : integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-1 * c);
	}
	else
	{
		return (c);
	}
}
