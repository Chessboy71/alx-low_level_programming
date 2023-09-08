#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 *
 *Main desctiption
 *
 *
 **/
int main(void)
{
	int n;


	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
