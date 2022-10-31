#include <stdio.h>
#include <math.h>

double mean(double arr[], int len) {
    double xbar = 0;
    for (int i = 0; i < len; i++)
        xbar += arr[i];
    return xbar / len;
}

double var(double arr[], int len) {
    double ss = 0, xbar = mean(arr, len);
    for (int i = 0; i < len; i++)
        ss += pow(arr[i] - xbar, 2);
    return ss / len;
}

double cov(double arr1[], double arr2[], int len) {
    double xbar1 = mean(arr1, len);
    double xbar2 = mean(arr2, len);
    double ss = 0;
    for (int i = 0; i < len; i++)
        ss += (arr1[i] - xbar1) * (arr2[i] - xbar2);
    return ss / len;
}

double corr(double arr1[], double arr2[], int len) {
    double covar = cov(arr1, arr2, len);
    double ssd1 = sqrt(var(arr1, len));
    double ssd2 = sqrt(var(arr2, len));
    return covar / (ssd1 * ssd2);
}

int main() {
    double nums1[1000], nums2[1000], r_val;
    int noe;
    printf("Enter the number of pair of elements: ");
    scanf("%d", &noe);
    printf("Enter the x values of the pairs: ");
    for (int i = 0; i < noe; i++)
        scanf("%lf", &nums1[i]);
    printf("Enter the y values of the pairs: ");
    for (int i = 0; i < noe; i++)
        scanf("%lf", &nums2[i]);
    r_val = corr(nums1, nums2, noe);
    printf("the correlation coefficient is %lf", r_val);
}