/*
Question: Write a program to print the reverse of a number.
		For example: [In]: 123 [Out]: 321
*/

#include <stdio.h>

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	int temp = num;
	int reverse = 0;
	while (temp != 0) {
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}
	printf("The reverse of %d is %d\n", num, reverse);
	return 0;
}

/*
Output: Enter the number: 6532
		The reverse of 6532 is 2356
*/