#include <stdio.h>
/*
 *
 * main - main code
 *
 * */
int main() {
	int sum = 0;
	for (int i = 0; i < 1024; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);
	return sum;
}
