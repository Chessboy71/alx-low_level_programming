#include "main.h"
#include <stdio.h>

/**
 *isLower - check if the string is loweCase
 *@c : string
 *Return: Always 0.
 */

int isLower(char c)
{
	return (c <= 'z' && c >= 'a');
}
/**
 *isDelimiter - check the code
 *@c : string
 *Return: Always 0.
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	while (delimiter[i] != '\0')
	{
		if (c == delimiter[i])
			return (1);
		i++;
	}
	return (0);
}
/**
 *cap_string - check the code
 *@str : string
 *Return: Always 0.
 */

char *cap_string(char *str)
{
	char *s = str;
	int delim = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			delim = 1;
		else if (isLower(*s) && delim)
		{
			*s -= 32;
			delim = 0;
		}
		else
			delim = 0;
		s++;
	}
	return (s);
}
