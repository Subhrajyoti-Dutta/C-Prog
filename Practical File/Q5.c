#include <stdio.h>

int main() {
    int points[2][100];
    double xi, yi, sxi = 0, syi = 0, sxi2 = 0, sxiyi = 0;
    double m, c;
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the x values in order: ");
    for (i = 0; i < n; i++)
        scanf("%d", &points[0][i]);
    printf("Enter the y values in order: ");
    for (i = 0; i < n; i++)
        scanf("%d", &points[1][i]);
    for (i = 0; i < n; i++) {
        xi = points[0][i];
        yi = points[1][i];

        sxi += xi;
        sxi2 += xi * xi;
        syi += yi;
        sxiyi += xi * yi;
    }
    m = (n * sxiyi - sxi * syi) / (n * sxi2 - sxi * sxi);
    c = (syi * sxi2 - sxi * sxiyi) / (n * sxi2 - sxi * sxi);
    printf("The best fitting line is: ");
    printf("y = %lfx + %lf\n", m, c);
}