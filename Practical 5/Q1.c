/*
Question: Write a program to evaluate the following expression
	1. Σ(i=1 to n) xi**2
	2. Mean of xi
	3. Standard deviation of xi
	4. Minimum of xi
	5. Maximum of xi
	6. Range of xi
	for the values x1, x2, ..., x10 which are read from user.
*/

#include <stdio.h>
#include <math.h>

int main() {
	double ss = 0, sum = 0, mean, sd, min, max, range;
	double arr[10];
	for (int i = 0; i < 10; i++) {
		printf("Enter the value of x%d: ", i+1);
		scanf("%lf", &arr[i]);
		sum += arr[i];
		ss += pow(arr[i], 2);
	}
	mean = sum / 10;
	min = max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	sd = sqrt(ss / 10 - pow(mean, 2));
	range = max - min;
	printf("\n\nSum of squares is     %6.2lf\n", ss);
	printf("Mean is               %6.2lf\n", mean);
	printf("Standard deviation is %6.2lf\n", sd);
	printf("Minimum is            %6.2lf\n", min);
	printf("Maximum is            %6.2lf\n", max);
	printf("Range is              %6.2lf\n", range);
	return 0;
}

/*
Output:
		Enter the value of x1: 1
		Enter the value of x2: 2
		Enter the value of x3: 3
		Enter the value of x4: 4
		Enter the value of x5: 5
		Enter the value of x6: 6
		Enter the value of x7: 7
		Enter the value of x8: 8
		Enter the value of x9: 9
		Enter the value of x10: 10


		Sum of squares is     385.00
		Mean is                 5.50
		Standard deviation is   2.87
		Minimum is              1.00
		Maximum is             10.00
		Range is                9.00
*/