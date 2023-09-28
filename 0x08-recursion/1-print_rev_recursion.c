#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char *str = s + 10000;

	if (str = > s && *str)
	{
		_putchar(*str);
		_print_rev_recursion(str - 1);
	}
	else if (str > s)
	{
		_print_rev_recursion(str - 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
