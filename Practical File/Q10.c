/*
Question: Write a program for chi-square testing
    independence of association of attributes.
*/

#include <stdio.h>
#include <math.h>

double xMarginal(double** arrOri, double* xMar, int row, int col) {
    for (int i = 0; i < row; i++) {
        xMar[i] = 0;
        for (int j = 0; j < col; j++) {
            xMar[i] += arrOri[i][j];
        }
    }
}

void yMarginal(double** arrOri, double* yMar, int row, int col) {
    for (int i = 0; i < col; i++) {
        yMar[i] = 0;
        for (int j = 0; j < row; j++) {
            yMar[i] += arrOri[j][i];
        }
    }
}

double chi_sqr(double arrOri[][], int row, int col) {

}

int main() {
    double table[10][10], row, col;
    printf("Enter the number of x attri(#rows): ");
    scanf("%lf", &row);
    printf("Enter the number of y attri(#cols): ");
    scanf("%lf", &col);

}