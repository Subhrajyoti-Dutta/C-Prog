/*
Question: Write a program to calculate
        i. mean
        ii. std dev
        iii. mean dev
        of an array of numbers using functions.
*/

#include <stdio.h>
#include <math.h>

double mean(int arr[], int len) {
    double mu = 0;
    for (int i = 0; i < len; i++)
        mu += arr[i];
    return mu / len;
}

double stddev(int arr[], int len) {
    double mu = mean(arr, len);
    double sigma = 0;
    for (int i = 0; i < len; i++)
        sigma += pow(arr[i] - mu, 2);
    return sqrt(sigma / len);
}

double meandev(int arr[], int len) {
    double mu = mean(arr, len);
    double md = 0;
    for (int i = 0; i < len; i++)
        md += fabs(arr[i] - mu);
    return md / len;
}

int main() {
    int list[100], len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    printf("Enter %d numbers: ", len);
    for (int i = 0; i < len; i++)
        scanf("%d", &list[i]);
    printf("Mean = %lf\n", mean(list, len));
    printf("Std dev = %lf\n", stddev(list, len));
    printf("Mean dev = %lf\n", meandev(list, len));
    return 0;
}

/*Output:
    Enter the number of elements: 10
    Enter 10 numbers: 22 12 6 59 98 57 91 68 22 2
    Mean = 43.700000
    Std dev = 33.606696
    Mean dev = 30.900000
*/