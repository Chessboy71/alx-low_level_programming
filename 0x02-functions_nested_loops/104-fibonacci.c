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
	long unsigned int num;
	long unsigned int numm;


	num = 1;
	printf("%ld, ", num);
	numm = 2;
	printf("%ld, ", numm);

	for (i = 3; i <= 90; i++)
	{
		printf("%ld, ", num + numm);
		numm = num + numm;
		num = numm - num;
	}
	return (0);
}
