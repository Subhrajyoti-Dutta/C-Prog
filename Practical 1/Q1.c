/*
Question: Write a program to read three va;lues using scanf
	function and print the following result:
		i.   Sum of the values.
		ii.  Average of the values.
		iii. Largest of the values.
		iv.  Smallest of the values.
*/

#include <stdio.h>

int main() {
	int num1, num2, num3;

	//Taking input
	printf("Enter three numbers separated by space: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	//Printing the sum
	int sum = num1 + num2 + num3;
	printf("Sum of the values is %d\n", sum);

	//Printing the average
	printf("Average of the values is %lf\n", sum / 3.0);

	//Printing max
	int max = num1, min = num1;
	
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num2;

	printf("Max of the values is %d\n", max);
	
	if (num2 < min)
		min = num2;
	if (num3 < min)
		min = num2;

	printf("Min of the values is %d\n", min);


	return 0;
}

/*
Output: Enter three numbers separated by space: 1 2 4
        Sum of the values is 7
        Average of the values is 2.333333
        Max of the values is 4
        Min of the values is 1
*/
