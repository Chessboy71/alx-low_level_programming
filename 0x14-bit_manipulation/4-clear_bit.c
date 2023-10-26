#include "main.h"

/**
 * clear_bit - sets 0 at a certain index
 *
 * @n : the number
 * @index: the index at where to set the umber
 *
 * Return: the new number
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 <= index)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
