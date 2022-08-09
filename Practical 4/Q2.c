/*
Question: Write a program to calculate factorial of a number provided by the user
*/

#include <stdio.h>

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	int fact = 1;
	for (int i = 2; i <= num; i++) {
		fact *= i;
	}
	printf("The factorial of %d is %d\n", num, fact);
	return 0;
}

/*
Output 1:   Enter the number: 10
			The factorial of 10 is 3628800

Output 2:   Enter the number: 7
			The factorial of 7 is 5040
*/