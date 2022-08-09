/*
Question: Write a program that reads a floating point number
	and dislays the right most digit of the integer part.
*/

#include <stdio.h>

int main() {
	double floatNum;
	printf("Write a floating point number: ");
	scanf("%lf", &floatNum);
	int intPart = floatNum;
	printf("The right most digit in integer part is %d\n", intPart % 10);
	return 0;
}

/*
Output: Write a floating point number: 12546.356
		The right most digit in integer part is 6
*/