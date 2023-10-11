#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the given array
 * @size : the size of the array
 *
 * @action: the function to perform action.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !size || !action)
		return;

	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
