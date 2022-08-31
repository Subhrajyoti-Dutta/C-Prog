/*
Question: Write a program to print the inverse of matrix
*/

#include <stdio.h>

int main() {
    double A[50][50], I[50][50], pivot, ele;
    int i, j, k, n;
    printf("Input the dimensions of the matrix: ");
    scanf("%d", &n);
    printf("Enter the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", &A[i][j]);


    for (i = 0; i < n; i++)
        I[i][i] = 1;

    //gaussian elimination

    for (i = 0; i < n; i++) {
        pivot = A[i][i];
        for (k = 0; k < n; k++) {
            A[i][k] /= pivot;
            I[i][k] /= pivot;
        }
        for (j = i + 1; j < n; j++) {
            ele = A[j][i];
            for (k = 0; k < n; k++) {
                A[j][k] -= ele * A[i][k];
                I[j][k] -= ele * I[i][k];
            }
        }
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            ele = A[j][i];
            for (k = 0; k < n; k++) {
                A[j][k] -= ele * A[i][k];
                I[j][k] -= ele * I[i][k];
            }
        }
    }
    printf("\nA:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%lf ", A[i][j]);
        }
        printf("\n");
    }
    printf("\ninv(A):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%lf ", I[i][j]);
        }
        printf("\n");
    }
}