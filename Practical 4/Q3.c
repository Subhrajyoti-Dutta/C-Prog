/*
Question: Write a program to output the following pattern:
		1
		2  3
		4  5  6
		7  8  9  10
		11 12 13 14 15
*/

#include <stdio.h>

int main() {
	int temp = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}

/*
Output: 1
		2 3
		4 5 6
		7 8 9 10
		11 12 13 14 15
*/