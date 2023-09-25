#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - returns pointer to the first occurence of the string
 * @s : selected string
 * @accept : targeted character
 *
 * Return: pointer to destination
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return ('\0');
}
