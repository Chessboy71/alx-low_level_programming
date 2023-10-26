#include "main.h"

/**
 * get_endianness - checks the endianness
 * @n : teh first number
 * @m: the second number
 *
 * Return: the number of bits that are different
 *
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;
	return (int)*c;
}
