#include <stdio.h>
#include <math.h>

int main() {
    double x, temp = 1, i = 1;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    while (pow(x / i, i) >= 0.01) {
        temp += pow(x / i, i);
        i++;
    }
    printf("The evaluation of the expression at x = %lf is %lf\n", x, temp);

}