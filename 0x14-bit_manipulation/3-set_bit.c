#include "main.h"

/**
 * set_bit - sets 1 at a certain index
 *
 * @n : the number
 * @index: the index at where to set the umber
 *
 * Return: the new number
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 <= index)
		return (-1);
	return (!!(*n |= 1L << index));
}
