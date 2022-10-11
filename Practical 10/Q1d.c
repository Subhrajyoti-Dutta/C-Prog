/*
Question: Write a program for t-test for
    i. single mean
    ii. difference of means
    iii. paired t-test
    iv. testing significance of correlation.
*/

#include <stdio.h>
#include <math.h>

double mean(double arr[], int len) {
    double xbar = 0;
    for (int i = 0; i < len; i++) {
        xbar += arr[i];
    }
    return xbar / len;
}

double svar(double arr[], int len) {
    double ss = 0, xbar = mean(arr, len);
    for (int i = 0; i < len; i++) {
        ss += pow(arr[i] - xbar, 2);
    }
    return ss / (len - 1);
}

double cov(double arr1[], double arr2[], int len) {
    double xbar1 = mean(arr1, len);
    double xbar2 = mean(arr2, len);
    double ss = 0;
    for (int i = 0; i < len; i++) {
        ss += (arr1[i] - xbar1) * (arr2[i] - xbar2);
    }
    return ss / (len - 1);
}

double t_test(double arr1[], double arr2[], int len) {
    double svar1 = svar(arr1, len);
    double svar2 = svar(arr2, len);
    double covar = cov(arr1, arr2, len);
    double r = covar / sqrt(svar1 * svar2);
    return sqrt((len - 2) * pow(r, 2) / (1 - pow(r, 2)));
}

int main() {
    double nums1[1000], nums2[1000];
    int noe;
    printf("Enter the number of pair of elements: ");
    scanf("%d", &noe);
    printf("Enter the x values of the pairs: ");
    for (int i = 0; i < noe; i++) {
        scanf("%lf", &nums1[i]);
    }
    printf("Enter the y values of the pairs: ");
    for (int i = 0; i < noe; i++) {
        scanf("%lf", &nums2[i]);
    }

    printf("The value of t-test at %d dof is %lf", noe - 2, t_test(nums1, nums2, noe));
}

/*
Output:
*/