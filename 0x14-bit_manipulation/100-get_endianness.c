#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little 0 if big
 *
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
