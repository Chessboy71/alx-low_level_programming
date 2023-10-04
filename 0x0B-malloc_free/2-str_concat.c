#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - getlength of a string,
 *
 *@str : the character to initialize
 *
 *Return: void
 */

int _strlen(char *str)
{
	int n = 0;
	char *p = str;

	while (*p != '\0')
	{
		n++;
		p++;
	}
	return (n);
}
/**
 * str_concat - concat two strings
 *@s1 : first string
 *@s2 : second string
 *
 *Return: void
 */
char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, i;
	char *newstr;

	if (s1 == NULL && s2 == NULL)
	{
		newstr = (char *)malloc(1);
		newstr = "";
		return (newstr);
	}
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	newstr = (char *)malloc((s1len + s2len) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		newstr[i] = s1[i];
	for (i = 0; i < s2len; i++)
		newstr[i + s1len] = s2[i];
	return (newstr);
}
