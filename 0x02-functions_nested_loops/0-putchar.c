#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	for (int i=0; i < 8; i++ )
		_putchar(word[i]);
	return 0;
}
