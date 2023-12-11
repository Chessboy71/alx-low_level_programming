#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *@dest : pointer to a character
 *@src : pointer to the source
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}


