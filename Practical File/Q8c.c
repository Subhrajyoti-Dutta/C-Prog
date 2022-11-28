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

double t_test(double arr1[], double arr2[], int len){
    double diff[1000];
    for (int i = 0; i < len; i++)
        diff[i] = arr1[i] - arr2[i];
    double dbar = mean(diff, len);
    double S2   = sum_of_sqr(diff, len) / (len - 1);
    return fabs(dbar)/sqrt(S2/len);
}

int main() {
    double nums1[1000], nums2[1000], con90, con95, con99, t_val;
    int noe;
    printf("Enter the number of pairs of elements: ");
    scanf("%d", &noe);
    printf("Enter the elements in first group: ");
    for (int i = 0; i < noe; i++) {
        scanf("%lf", &nums1[i]);
    }
    printf("Enter the elements in second group: ");
    for (int i = 0; i < noe; i++) {
        scanf("%lf", &nums2[i]);
    }
    printf("Enter the tabulated t-value at %ddof at 90%% confidence: ", noe - 1);
    scanf("%lf", &con90);
    printf("Enter the tabulated t-value at %ddof at 95%% confidence: ", noe - 1);
    scanf("%lf", &con95);
    printf("Enter the tabulated t-value at %ddof at 99%% confidence: ", noe - 1);
    scanf("%lf", &con99);
    t_val = t_test(nums1, nums2, noe);

    printf("The value of t-test at %d dof is %lf\n", noe - 1, t_val);
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
    Enter the number of pairs of elements: 8
    Enter the elements in first group: 49 53 51 52 47 50 52 53
    Enter the elements in second group: 52 55 52 53 50 54 54 53
    Enter the tabulated t-value at 7dof at 90% confidence: 1.415
    Enter the tabulated t-value at 7dof at 95% confidence: 1.895
    Enter the tabulated t-value at 7dof at 99% confidence: 2.998
    The value of t-test at 7 dof is 4.320494
    It is rejected at all level
*/