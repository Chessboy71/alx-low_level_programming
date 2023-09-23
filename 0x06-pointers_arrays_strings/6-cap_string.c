#include "main.h"
#include <stdio.h>

/**
 *isLower - check if the string is loweCase
 *@c : string
 *Return: Always 0.
 */

int isLower(char c)
{
	return (c <= 122 && c >= 97);
}
/**
 *isDelimiter - check the code
 *@c : string
 *Return: Always 0.
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
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
	}
	return (s);
}
