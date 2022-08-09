/*
Question: Write a program that reads a 4 digit number
	and then displays the number as follows:
		8765
		765
		65
        5
*/

#include <stdio.h>
#include <math.h>

int main() {
	int num, powOfTen;
	printf("Enter the number: ");
	scanf("%d", &num);
	for (int i = 4; i > 0; i--) {
		powOfTen = pow(10, i);
		printf("%d\n", num % powOfTen);
	}
	return 0;
}