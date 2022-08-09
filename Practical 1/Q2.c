/*
Question: Write a program that determines whether a given
    number is odd or even and print the output.
*/

#include <stdio.h>

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d is even\n", num);
	else
		printf("%d is odd\n", num);

	return 0;
}

/*
Output: Enter the number: 1542
        1542 is even
*/