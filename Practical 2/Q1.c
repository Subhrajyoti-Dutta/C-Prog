/*
Question: Write a program to read a 4 digit number
    and print the sum of the digits.
*/

#include <stdio.h>

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);

	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	printf("The sum of the digits are: %d\n", sum);
	return 0;
}

/*
Output: Enter the number: 4878
		The sum of the digits are: 27
*/