#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - check the code
 *@s : pointer to a character
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int r = 0;
	long sign;

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
		if (r > INT_MAX / 10 || (r == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
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
		r = r * 10 + (*s - '0');
		s++;
		}
		return (r * sign);
		}
