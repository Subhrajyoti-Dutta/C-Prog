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
    double var = 0, xbar = mean(arr, len);
    for (int i = 0; i < len; i++) {
        var += pow(arr[i] - xbar, 2);
    }
    return var / (len - 1);
}

double t_test(double arr[], int len, double mu) {
    double xbar = mean(arr, len);
    double sd = svar(arr, len);
    return fabs(xbar - mu) / sqrt(sd / len);
}

int main() {
    double nums[1000], mu, con90, con95, con99, t_val;
    int noe;
    printf("Enter the mu: ");
    scanf("%lf", &mu);
    printf("Enter the number of elements: ");
    scanf("%d", &noe);
    printf("Enter the elements: ");
    for (int i = 0; i < noe; i++) {
        scanf("%lf", &nums[i]);
    }
    printf("Enter the tabulated t-value at %ddof at 90%% confidence: ", noe - 1);
    scanf("%lf", &con90);
    printf("Enter the tabulated t-value at %ddof at 95%% confidence: ", noe - 1);
    scanf("%lf", &con95);
    printf("Enter the tabulated t-value at %ddof at 99%% confidence: ", noe - 1);
    scanf("%lf", &con99);
    t_val = t_test(nums, noe, mu);
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
    Enter the mu: 100
    Enter the number of elements: 10
    Enter the elements: 70 120 110 101 88 83 95 98 107 100
    Enter the tabulated t-value at 9dof at 90% confidence: 1.397
    Enter the tabulated t-value at 9dof at 95% confidence: 1.860
    Enter the tabulated t-value at 9dof at 99% confidence: 2.895
    The value of t-test at 9 dof is 0.620336
    It is accepted at 90% confidence
*/