/*
Question: Write a program to calculate the largest value among the 3 values entered by the user by using
		i.   simple if
		ii.  nested if else
		iii. if else ladder
*/

#include <stdio.h>

int main() {
	int num1, num2, num3, max1, max2, max3;

	//Taking input
	printf("Enter three numbers separated by space: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	//Method 1
	printf("\nBy method 1:\n");
	max1 = num1;

	if (max1 < num2)
		max1 = num2;
	if (max1 < num3)
		max1 = num3;

	printf("The max value by method 1 is %d\n", max1);

	//Method 2
	printf("\nBy method 2:\n");

	if (num1 < num2) {
		if (num2 < num3) 
			max2 = num3;
		else
			max2 = num2;
	}
	else {
		if (num1 < num3)
			max2 = num3;
		else
			max2 = num1;
	}
	
	printf("The max value by method 2 is %d\n", max2);

	//Method 3
	printf("\nBy method 3:\n");

	if (num1 > num2 && num1 > num3) {
		max3 = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		max3 = num2;
	}
	else {
		max3 = num3;
	}
	
	printf("The max value by method 3 is %d\n", max3);
	return 0;
}

/*
Output: Enter three numbers separated by space: 324 5 89

		By method 1:
		The max value by method 1 is 324

		By method 2:
		The max value by method 2 is 324

		By method 3:
		The max value by method 3 is 324
*/