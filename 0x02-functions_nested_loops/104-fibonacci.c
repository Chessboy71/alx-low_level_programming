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
	printf("%uld, ", num);
	numm = 2;
	printf("%uld, ", numm);

	for (i = 3; i <= 98; i++)
	{
		printf("%ld, ", num + numm);
		numm = num + numm;
		num = numm - num;
	}
	return (0);
}
