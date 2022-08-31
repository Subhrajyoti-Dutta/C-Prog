#include <stdio.h>
#include <math.h>

long fact(long num) {
    long temp = 1, i = 2;
    while (i <= num) {
        temp *= i;
        i++;
    }
    return temp;

}

int main() {
    double x, temp = 0;
    long n, i;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%ld", &n);
    for (i = 1; i <= n; i++) {
        temp += pow(x, i) / fact(2 * i - 1);
    }
    printf("Evaluation of the expression at x = %lf and n = %ld is %lf\n", x, n, temp);
}