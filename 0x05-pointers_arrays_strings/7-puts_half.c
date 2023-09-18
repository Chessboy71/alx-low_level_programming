#include "main.h"
#include <stdio.h>

/**
 * puts_half - gives the length
 * @str : A string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n = 0;
	int i;
	char *p = str;
	int m;

	while (*p != '\0')
	{
		n++;
		p++;
	}
    
    m = (n - 1) / 2;
    
	if (n % 2 == 0){
	    for (i = 0; i < m ; i++)
	    {
		putchar(*(str + n - m - 1));
		str++;
	    }
	}
	else
	{
	    for (i = 0; i < m ; i++)
	    {
		putchar(*(str + n - m));
		str++;
	    }
	}
	if (*(str + m + 1) != '\0')
	{
		putchar(*(str + m + 1));
	}
	putchar('\n');
}

