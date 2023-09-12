#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char word[8] = "_putchar";

	for (i = 0; i < 8; i++)
		putchar(word[i]);

	return (0);
}
