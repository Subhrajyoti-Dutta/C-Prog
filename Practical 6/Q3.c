/*
Question: Write a program to input two nxn matrix and print
		the product of matrix A & matrix B.
*/

#include <stdio.h>

int main() {
	int A[50][50], B[50][50];
	int i, j, k, n, t;
	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("Enter the matrix A:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the matrix B:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	printf("The product of A and B is\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			t = 0;
			for (k = 0; k < n; k++) {
				t += A[i][k] * B[k][j];
			}
			printf("%3d ", t);
		}
		printf("\n");
	}
}

/*
Output:
		Enter value of n: 3
		Enter the matrix A:
		1 2 3
		4 5 6
		7 8 9
		Enter the matrix B:
		1 4 7
		2 5 8
		3 6 9
		The product of A and B is
		 14  32  50
		 32  77 122
		 50 122 194
*/