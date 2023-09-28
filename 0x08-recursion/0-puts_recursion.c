#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
    while (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
        return;
    }
}
