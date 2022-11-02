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
    double nums1[1000], nums2[1000], con90, con95, con99, f_val;
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

    printf("Enter f-value at (%d, %d) dof at 90%% confidence: ", noe1 - 1, noe2 - 1);
    scanf("%lf", &con90);
    printf("Enter f-value at (%d, %d) dof at 95%% confidence: ", noe1 - 1, noe2 - 1);
    scanf("%lf", &con95);
    printf("Enter f-value at (%d, %d) dof at 99%% confidence: ", noe1 - 1, noe2 - 1);
    scanf("%lf", &con99);

    f_val = f_test(nums1, noe1, nums2, noe2);
    printf("The value of f-test at (%d, %d) dof is %lf\n", noe1 - 1, noe2 - 1, f_val);
    if (con90 > f_val)
        printf("It is accepted at 90%% confidence");
    else if (con95 > f_val)
        printf("It is accepted at 95%% confidence");
    else if (con99 > f_val)
        printf("It is accepted at 99%% confidence");
    else
        printf("It is rejected at all level");
    return 0;
}

/*Output:
    Enter the number of elements in first group: 6
    Enter the elements in first group: 43 21 25 42 57 59
    Enter the number of elements in second group: 6
    Enter the elements in second group: 99 65 79 75 87 81
    Enter f-value at (5, 5) dof at 90% confidence: 3.452
    Enter f-value at (5, 5) dof at 95% confidence: 5.050
    Enter f-value at (5, 5) dof at 99% confidence: 10.967
    The value of f-test at (5, 5) dof is 1.891514
    It is accepted at 90% confidence
*/