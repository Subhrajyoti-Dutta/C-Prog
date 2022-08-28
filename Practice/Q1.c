/*
Question: Write a program to take x as input
        and print the e^x.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    long fact;
    double sum = 1, x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    fact = 1;
    for (i = 1; i < 20;i++) {
        fact *= i;
        sum += pow(x, i) / fact;
    }
    printf("exp(%lf) = %lf\n", x, sum);
}