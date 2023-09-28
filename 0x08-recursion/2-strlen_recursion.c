#include "main.h"

/**
 * _strlen_recursion - prints a string
 * @s: the string to get the length
 *
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
