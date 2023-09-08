#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %zu\n", sizeof(int), "byte(s)");
	printf("Size of char: %zu\n", sizeof(char), "byte(s)");
	printf("Size of float: %zu\n", sizeof(float), "byte(s)");
	printf("Size of double: %zu\n", sizeof(double), "byte(s)");
	printf("Size of long int: %zu\n", sizeof(long int), "byte(s)");
	printf("Size of long long int: %zu\n", sizeof(long long int), "byte(s)");
	return (0);
}
