/*
Question: Write a program print the equation of line of regression using the given data.
        +----------------+----+----+----+----+----+----+
        |         Age(X) | 43 | 21 | 25 | 42 | 57 | 59 |
        +----------------+----+----+----+----+----+----+
        | Glucose Lvl(Y) | 99 | 65 | 79 | 75 | 87 | 81 |
        +----------------+----+----+----+----+----+----+
*/


#include <stdio.h>

int main() {
    int points[2][6] = {
        {43, 21, 25, 42, 57, 59},
        {99, 65, 79, 75, 87, 81}
    };
    double xi, yi, sxi = 0, syi = 0, sxi2 = 0, sxiyi = 0;
    double m, c;
    int i, n = 6;
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
    printf("The equation of line of regression is: ");
    printf("GL = %lf * Age + %lf\n", m, c);
}

/*
Output:
        The best fitting line is: GL = 0.385225 * Age + 65.141572
*/