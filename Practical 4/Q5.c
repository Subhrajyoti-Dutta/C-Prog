/*
Question: Write a program to calculate the mean of 10 numbers;
*/

#include <stdio.h>

int main() {
	int sum = 0, num;
	for (int i = 1; i <= 10; i++) {
		printf("Enter the %dth number: ", i);
		scanf("%d", &num);
		sum += num;
	}
	printf("The average of the given numbers is: %lf\n", sum / 10.0);
	return 0;
}

/*
Output: Enter the 1th number: 45
		Enter the 2th number: 12
		Enter the 3th number: 89
		Enter the 4th number: 63
		Enter the 5th number: 74
		Enter the 6th number: 63
		Enter the 7th number: 82
		Enter the 8th number: 91
		Enter the 9th number: 43
		Enter the 10th number: 72
		The average of the given numbers is: 63.400000
*/