#include <stdio.h>
#include <math.h>

int main() {

    int sampleSize;
    double t, mean, var, skew, kurt;
    double m1, m2, m3, m4, m1p, m2p, m3p, m4p;

    printf("Enter sample size: ");
    scanf("%d", &sampleSize);

    for (int i = 0; i < sampleSize; i++) {
        printf("Enter the %dth element: ", i);
        scanf("%lf", &t);
        m1p += pow(t, 1);
        m2p += pow(t, 2);
        m3p += pow(t, 3);
        m4p += pow(t, 4);
    }

    m1p /= sampleSize;
    m2p /= sampleSize;
    m3p /= sampleSize;
    m4p /= sampleSize;

    m1 = 0;
    m2 = m2p - pow(m1p, 2);
    m3 = m3p - 3 * m1p * m2p + 2 * pow(m1p, 3);
    m4 = m4p - 4 * m3p * m1p + 6 * m2p * pow(m1p, 2) - 3 * pow(m1p, 4);

    mean = m1p;
    var = m2;
    skew = m3 / pow(m2, 1.5);
    kurt = m4 / pow(m2, 2);

    printf("mean = %lf\n", mean);
    printf("var  = %lf\n", var);
    printf("skew = %lf\n", skew);
    printf("kurt = %lf\n", kurt);
    return 0;
}