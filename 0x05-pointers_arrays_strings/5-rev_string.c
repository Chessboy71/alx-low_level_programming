#include "main.h"
#include <stdio.h>

/**
 * rev_string - gives the length
 * @s : A string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int n = 0;
	int i;
	char *p = s;
	char us = *s;

	while (*p != '\0')
	{
		n++;
		p++;
	}
	for (i = 0; i < n / 2; i++)
	{
		char temp = *(s + i);
		*(s + i) = *(us + n - i - 1);
		*(us + n - i - 1) = temp;

	}
}
