/*
Question: Write a program to output the
		fibonacci series till 20 terms
*/

#include <stdio.h>

int main() {
	int a = 0, b = 1, c;
	for (int i = 0; i < 20; i++) {
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return 0;
}

/*
Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
*/