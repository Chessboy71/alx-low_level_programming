#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int num;
	unsigned long int numm;


	num = 1;
	printf("%lu, ", num);
	numm = 2;
	printf("%lu, ", numm);

	for (i = 3; i <= 98; i++)
	{
		printf("%lu, ", num + numm);
		numm = num + numm;
		num = numm - num;
	}
	return (0);
}
