#include "main.h"
#include <stdio.h>
#include <stdbool.h> // Include the necessary header for using boolean type

/**
 * isLower - check if the character is lowercase
 * @c: character
 * Return: true if the character is lowercase, false otherwise
 */
bool isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * isDelimiter - check if the character is a delimiter
 * @c: character
 * Return: true if the character is a delimiter, false otherwise
 */
bool isDelimiter(char c)
{
	int i;

	char delimiters[] = " \t\n,.!?\"(){}";
	for (i = 0; delimiters[i] != '\0'; i++)
	{
		if (c == delimiters[i])
			return true;
	}
	return false;
}

/**
 * cap_string - capitalize the first letter of each word in a string
 * @str: input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isDelimiter(str[i]))
		{
			new_word = true;
		}
		else if (new_word && isLower(str[i]))
		{
			str[i] -= 32;
			new_word = false;
		}
		else
		{
			new_word = false;
		}
	}

	return str;
}
