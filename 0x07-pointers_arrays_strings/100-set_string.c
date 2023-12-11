#include "main.h"

/**
 * set_string - a function that changes the string
 * @s : pointer of a pointer
 * @to : pointer to the second thing
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
