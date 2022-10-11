/*
Question: Write a program for f-test.
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

double f_test(double arr1[], int len1, double arr2[], int len2) {
    double svar1 = svar(arr1, len1);
    double svar2 = svar(arr2, len2);
    double f = svar1 / svar2;
    if (f < 1) return 1 / f;
    else return f;
}

int main() {
    double nums1[1000], nums2[1000];
    int noe1, noe2;
    printf("Enter the number of elements in first group: ");
    scanf("%d", &noe1);
    printf("Enter the elements in first group: ");
    for (int i = 0; i < noe1; i++) {
        scanf("%lf", &nums1[i]);
    }

    printf("Enter the number of elements in second group: ");
    scanf("%d", &noe2);
    printf("Enter the elements in second group: ");
    for (int i = 0; i < noe2; i++) {
        scanf("%lf", &nums2[i]);
    }

    printf("The value of f-test at (%d, %d) dof is %lf", noe1 - 1, noe2 - 1, f_test(nums1, noe1, nums2, noe2));
    return 0;
}