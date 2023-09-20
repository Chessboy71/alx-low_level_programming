#include "main.h"

/**
 *_strcat - check the code
 *@dest : pointer to a character
 *@src : pointer to the source
 *Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	dest++;
	*dest = '\0';

	return (original_dest);
}