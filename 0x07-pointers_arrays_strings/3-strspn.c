#include "main.h"
#include <stdio.h>
/**
 * _strspn - returns pointer to the first occurence of the string
 * @s : selected string
 * @c : targeted character
 *
 * Return: pointer to destination
 */
unsigned int *_strspn(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
