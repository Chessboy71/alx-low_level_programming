#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the given array
 * @size : the size of the array
 *
 * @cmp: the function to perform action.
 * Return: the index of the integer, of -1 if not found or failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !size || !cmp)
		return (-1);
	else if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
