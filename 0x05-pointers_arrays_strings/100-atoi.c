#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - check the code
 *@s : pointer to a character
 * Return: Always 0.
 */

#include <stdio.h>
#include <limits.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}


	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
