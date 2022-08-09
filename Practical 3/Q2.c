/*
Question: Write a program to evaluate the sq. root for
	10 numbers entered by the user (by using goto statement).
*/

#include <stdio.h>
#include <math.h>

int main() {
	double num, numSqrt, count = 10;
SQRT:
	printf("Enter the number: ");
	scanf("%lf", &num);
	numSqrt = sqrt(num);
	printf("The square root of %lf is %lf\n", num, numSqrt);
	count--;
	if (count > 0)
		goto SQRT;
	return 0;
}

/*
Output: Enter the number: 256.3
		The square root of 256.300000 is 16.009372
		Enter the number: 12.4
		The square root of 12.400000 is 3.521363
		Enter the number: 25
		The square root of 25.000000 is 5.000000
		Enter the number: 68.7
		The square root of 68.700000 is 8.288546
		Enter the number: 56.23
		The square root of 56.230000 is 7.498667
		Enter the number: 99.45
		The square root of 99.450000 is 9.972462
		Enter the number: 1024
		The square root of 1024.000000 is 32.000000
		Enter the number: 31.41592
		The square root of 31.415920 is 5.604991
		Enter the number: 2.71
		The square root of 2.710000 is 1.646208
		Enter the number: 3.14
		The square root of 3.140000 is 1.772005
*/