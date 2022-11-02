/*
Question: Write a program for chi-square testing
    independence of association of attributes.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double table[10][10], con90, con95, con99, chi2_val, expected_i_j, total = 0;
    int row, col;
    printf("Enter the number of x attri(#rows): ");
    scanf("%d", &row);
    printf("Enter the number of y attri(#cols): ");
    scanf("%d", &col);
    printf("Enter the data in matrix form:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%lf", &table[i][j]);
        }
    }
    printf("Enter chi2-value at %ddof at 90%% confidence: ", (row - 1) * (col - 1));
    scanf("%lf", &con90);
    printf("Enter chi2-value at %ddof at 95%% confidence: ", (row - 1) * (col - 1));
    scanf("%lf", &con95);
    printf("Enter chi2-value at %ddof at 99%% confidence: ", (row - 1) * (col - 1));
    scanf("%lf", &con99);

    double xMar[10], yMar[10];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            xMar[i] += table[i][j];
            yMar[j] += table[i][j];
            total += table[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            expected_i_j = xMar[i] * yMar[j] / total;
            chi2_val += pow(expected_i_j - table[i][j], 2) / expected_i_j;
        }
    }

    printf("The value of chi2-test at %ddof is %lf\n", (row - 1) * (col - 1), chi2_val);
    if (con90 > chi2_val)
        printf("It is accepted at 90%% confidence");
    else if (con95 > chi2_val)
        printf("It is accepted at 95%% confidence");
    else if (con99 > chi2_val)
        printf("It is accepted at 99%% confidence");
    else
        printf("It is rejected at all level");
    return 0;
}

/*Output:
    Enter the number of x attri(#rows): 2
    Enter the number of y attri(#cols): 3
    Enter the data in matrix form:
    213 203 182
    138 110 154
    Enter chi2-value at 2dof at 90% confidence: 4.605
    Enter chi2-value at 2dof at 95% confidence: 5.991
    Enter chi2-value at 2dof at 99% confidence: 9.210
    The value of chi2-test at 2dof is 7.878212
    It is accepted at 99% confidence
*/