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
    printf("The sum of A and B is\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}