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
/**
 * _puts_recursion - prints a string
 * @s: the string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}