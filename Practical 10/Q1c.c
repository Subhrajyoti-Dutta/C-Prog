/*
Question: Write a program for t-test for single mean,
        difference of means, paired t-test and testing
        significance of correlation.
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

double sum_of_sqr(double arr[], int len) {
    double ss = 0, xbar = mean(arr, len);
    for (int i = 0; i < len; i++) {
        ss += pow(arr[i] - xbar, 2);
    }
    return ss;
}

double t_test(double arr1[], int len1, double arr2[], int len2) {
    double xbar1 = mean(arr1, len1);
    double xbar2 = mean(arr2, len2);
    double S2 = (sum_of_sqr(arr1, len1) + sum_of_sqr(arr2, len2)) / (len1 + len2 - 2);
    return fabs(xbar1 - xbar2) / sqrt(S2 * (1.0 / len1 + 1.0 / len2));
}

int main() {
    double nums1[1000], nums2[1000], con90, con95, con99, t_val;
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
    printf("Enter the tabulated t-value at %ddof at 90%% confidence: ", noe1 + noe2 - 2);
    scanf("%lf", &con90);
    printf("Enter the tabulated t-value at %ddof at 95%% confidence: ", noe1 + noe2 - 2);
    scanf("%lf", &con95);
    printf("Enter the tabulated t-value at %ddof at 99%% confidence: ", noe1 + noe2 - 2);
    scanf("%lf", &con99);
    t_val = t_test(nums1, noe1, nums2, noe2);

    printf("The value of t-test at %d dof is %lf\n", noe1 + noe2 - 2, t_test(nums1, noe1, nums2, noe2));
    if (con90 > t_val)
        printf("It is accepted at 90%% confidence");
    else if (con95 > t_val)
        printf("It is accepted at 95%% confidence");
    else if (con99 > t_val)
        printf("It is accepted at 99%% confidence");
    else
        printf("It is rejected at all level");
    return 0;
}

/*
Output:
    Enter the number of elements in first group: 12
    Enter the elements in first group: 25 32 30 34 24 14 32 24 30 31 35 25
    Enter the number of elements in second group: 15
    Enter the elements in second group: 44 34 22 10 47 31 40 30 32 35 18 21 35 29 22
    Enter the tabulated t-value at 25dof at 90% confidence: 1.316
    Enter the tabulated t-value at 25dof at 95% confidence: 1.708
    Enter the tabulated t-value at 25dof at 99% confidence: 2.485
    The value of t-test at 25 dof is 0.610278
    It is accepted at 90% confidence
*/