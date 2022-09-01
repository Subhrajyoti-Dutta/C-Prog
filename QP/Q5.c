#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D;
    printf("Enter the coefficients in ax^2 + bx + c = 0:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    D = pow(b, 2) - 4 * a * c;
    if (a == 0) {
        if (b == 0) {
            printf("No solution\n");
            return 0;
        }
        else {
            printf("Solution is x = %lf", -c / b);
            return 0;
        }
    }
    else {
        if (D == 0) {
            printf("Solution is x = %lf", -b / (2 * a));
        }
        else if (D > 0) {
            double root1 = (-b + sqrt(D)) / (2 * a);
            double root2 = (-b - sqrt(D)) / (2 * a);
            printf("Solutions are x = %lf and x = %lf", root1, root2);
        }
        else {
            double root_real = -b / (2 * a);
            double root_img = sqrt(-D) / (2 * a);
            printf("Solutions are x = %lf + %lfi and x = %lf - %lfi", root_real, root_img, root_real, root_img);
        }
    }
}