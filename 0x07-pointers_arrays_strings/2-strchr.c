#include "main.h"

/**
 * _strchr - returns pointer to the first occurence of the string
 * @s : selected string
 * @c : targeted character
 *
 * Return: pointer to destination
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (NULL);

}
