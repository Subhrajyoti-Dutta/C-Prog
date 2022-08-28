/*
Question: Write a program to read two matrix A and B and print:
		i.  A + B
		ii. A - B
*/

#include <stdio.h>

int main() {
	int A[50][50], B[50][50];
	int i, j, r, c;
	printf("Enter number of rows: ");
	scanf("%d", &r);
	printf("Enter number of cols: ");
	scanf("%d", &c);
	printf("Enter the matrix A:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the matrix B:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	printf("A + B is\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%3d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	printf("A - B is\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%3d ", A[i][j] - B[i][j]);
		}
		printf("\n");
	}

}

/*
Output:
		Enter number of rows: 2
		Enter number of cols: 3
		Enter the matrix A:
		3 4 9
		7 6 2
		Enter the matrix B:
		8 2 1
		7 3 6
		A + B is
		 11   6  10
		 14   9   8
		A - B is
		 -5   2   8
		  0   3  -4
*/