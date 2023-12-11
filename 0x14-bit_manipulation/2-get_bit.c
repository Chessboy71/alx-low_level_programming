#include "main.h"

/**
 * get_bit - return a number at a certain index
 *
 * @n : the number
 * @index: the index at where to get the umber
 *
 * Return: 1 or 0 when success -1 when fails
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 <= index)
		return (-1);
	return ((n >> index) & 1);
}
