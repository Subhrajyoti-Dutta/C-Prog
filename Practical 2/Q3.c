/*
Question: Modify the previous question to display the
	two right most digits of the integer part.
*/

#include <stdio.h>

int main() {
	double floatNum;
	printf("Write a floating point number: ");
	scanf("%lf", &floatNum);
	int intPart = floatNum;
	printf("The two right most digit in integer part is %d\n", intPart % 100);
	return 0;
}

/*
Output: Write a floating point number: 1245.326
		The two right most digit in integer part is 45
*/