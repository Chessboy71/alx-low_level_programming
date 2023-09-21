#include "main.h"

/**
 *_strncpy - check the code
 *@dest : pointer to a character
 *@src : pointer to the source
 *@n : integer to specify the number of bits
 *Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int i = 0;


	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}



	return (dest);
}
