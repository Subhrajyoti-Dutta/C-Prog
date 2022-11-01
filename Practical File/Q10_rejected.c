/*
Question: Write a program for chi-square testing
    independence of association of attributes.
*/

#include <stdio.h>
#include <math.h>

void xMarginal(double arrOri[10][10], double xMar[10], int row, int col) {
    // printf("rows=%d\n", row);
    for (int i = 0; i < row; i++) {
        xMar[i] = 0;
        for (int j = 0; j < col; j++) {
            xMar[i] += arrOri[i][j];
            // printf("xMar[%d] = %lf\n", i, xMar[i]);
        }
    }
}

void yMarginal(double arrOri[10][10], double yMar[10], int row, int col) {
    for (int i = 0; i < col; i++) {
        yMar[i] = 0;
        for (int j = 0; j < row; j++) {
            yMar[i] += arrOri[j][i];
        }
    }
}

void indepArr(double arrInd[10][10], double xMar[10], double yMar[10], int row, int col) {
    double total = 0;
    for (int i = 0; i < row; i++) {
        total += xMar[i];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arrInd[i][j] = xMar[i] * yMar[j] / total;
            printf("arrInd[%d][%d] = %lf\n", i, j, arrInd[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%lf ", arrInd[i][j]);
        }
        printf("\n");
    }
}

double chi_sqr(double arrOri[10][10], int row, int col) {
    double arrInd[row][col];
    double xMar[row];
    double yMar[col];
    xMarginal(arrOri, xMar, row, col);
    yMarginal(arrOri, yMar, row, col);
    for (int i = 0; i < row; i++) {
        printf("%lf ", xMar[i]);
    }
    printf("\n");
    for (int i = 0; i < col; i++) {
        printf("%lf ", yMar[i]);
    }
    printf("\n");
    // indepArr(arrInd, xMar, yMar, row, col);
    double total = 0;
    for (int i = 0; i < row; i++) {
        total += xMar[i];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arrInd[i][j] = xMar[i] * yMar[j] / total;
            printf("arrInd[%d][%d] = %lf\n", i, j, arrInd[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%lf ", arrInd[i][j]);
        }
        printf("\n");
    }
    printf("Expected\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%lf ", arrInd[i][j]);
        }
        printf("\n");
    }
    printf("Actual\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%lf ", arrOri[i][j]);
        }
        printf("\n");
    }
    double chi2 = 0;
    double t;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            t = pow(arrInd[i][j] - arrOri[i][j], 2) / arrInd[i][j];
            chi2 += t;
            // printf("t=%lf\n", t);
        }
    }
    return chi2;
}

int main() {
    double con90, con95, con99, chi2_val;
    // double table[10][10], con90, con95, con99, chi2_val;
    // int row, col;
    int row = 2, col = 3;
    // printf("Enter the number of x attri(#rows): ");
    // scanf("%d", &row);
    // printf("Enter the number of y attri(#cols): ");
    // scanf("%d", &col);
    // printf("Enter the data in matrix form:\n");
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         scanf("%lf", &table[i][j]);
    //     }
    // }
    double table[10][10] = { {213,203,182},{138,110,154} };
    // printf("Enter chi2-value at %ddof at 90%% confidence: ", (row - 1) * (col - 1));
    // scanf("%lf", &con90);
    // printf("Enter chi2-value at %ddof at 95%% confidence: ", (row - 1) * (col - 1));
    // scanf("%lf", &con95);
    // printf("Enter chi2-value at %ddof at 99%% confidence: ", (row - 1) * (col - 1));
    // scanf("%lf", &con99);
    chi2_val = chi_sqr(table, row, col);
    printf("The value of chi2-test at %ddof is %lf\n", (row - 1) * (col - 1), chi2_val);
    // if (con90 > chi2_val)
    //     printf("It is accepted at 90%% confidence");
    // else if (con95 > chi2_val)
    //     printf("It is accepted at 95%% confidence");
    // else if (con99 > chi2_val)
    //     printf("It is accepted at 99%% confidence");
    // else
    //     printf("It is rejected at all level");
    return 0;
}