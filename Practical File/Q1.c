#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    double x = 0, x_2 = 0, t;
    for (int i = 0; i < n; i++) {
        printf("Enter %dth number: ", i);
        scanf("%lf", &t);
        x += t;
        x_2 += pow(t, 2);
    }
    double mean = x / n;
    double var = x_2 / n - pow(x / n, 2);
    printf("Mean: %lf\nVariance: %lf\n", mean, var);
}