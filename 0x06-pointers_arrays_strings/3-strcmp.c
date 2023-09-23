#include "main.h"

/**
 * _strcmp - Compares two strings
 *@s1 : first string
 *@s2 : second string
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			eq = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (eq);
}
