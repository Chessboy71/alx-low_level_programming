#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a : integer
 *@b : integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
}

