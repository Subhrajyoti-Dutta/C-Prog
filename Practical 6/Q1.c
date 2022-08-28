/*
Question: Write a program to print transpose of
		a matrix given by user.
*/

#include <stdio.h>

int main() {
	int r, c, i, j;
	int arr[50][50];
	printf("Enter number of rows: ");
	scanf("%d", &r);
	printf("Enter number of cols: ");
	scanf("%d", &c);
	printf("Enter the values in matrix form:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The transposed matrix is:\n");
	for (j = 0; j < c; j++) {
		for (i = 0; i < r; i++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

/*
Output:
		Enter number of rows: 2
		Enter number of cols: 3
		Enter the values in matrix form:
		1 6 4
		8 5 2
		The transposed matrix is:
		1 8
		6 5
		4 2
*/