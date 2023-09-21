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
	int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    while (i < n){
        dest[i] = '\0';
        i++;
    }

   return (dest);
}
