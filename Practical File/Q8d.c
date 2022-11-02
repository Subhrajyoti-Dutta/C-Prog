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
    double nums1[1000], nums2[1000], con90, con95, con99, t_val;
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
    printf("Enter the tabulated t-value at %ddof at 90%% confidence: ", noe - 2);
    scanf("%lf", &con90);
    printf("Enter the tabulated t-value at %ddof at 95%% confidence: ", noe - 2);
    scanf("%lf", &con95);
    printf("Enter the tabulated t-value at %ddof at 99%% confidence: ", noe - 2);
    scanf("%lf", &con99);
    t_val = t_test(nums1, nums2, noe);

    printf("The value of t-test at %d dof is %lf\n", noe - 2, t_val);
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
    Enter the number of pair of elements: 6
    Enter the x values of the pairs: 43 21 25 42 57 59
    Enter the y values of the pairs: 99 65 79 75 87 81
    Enter the tabulated t-value at 4dof at 90% confidence: 2.132
    Enter the tabulated t-value at 4dof at 95% confidence: 2.776
    Enter the tabulated t-value at 4dof at 99% confidence: 4.604
    The value of t-test at 4 dof is 1.249377
    It is accepted at 90% confidence
*/