#include "main.h"
#include <stdio.h>
/**
 * _strspn - returns pointer to the first occurence of the string
 * @s : selected string
 * @accept : targeted character
 *
 * Return: pointer to destination
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
