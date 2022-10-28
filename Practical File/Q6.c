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

void sort(int arr[], int len) {
    int temp;
    for (int i = 0; i < len; i++)
        for (int j = i; j > 0; j--)
            if (arr[j - 1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
}

double median(int sortedArr[], int len) {
    if (len % 2 == 0)
        return (sortedArr[len / 2] + sortedArr[len / 2 - 1]) / 2.0;
    else
        return (sortedArr[len / 2]);

}

int main() {
    int list[100], len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    printf("Enter %d numbers: ", len);
    for (int i = 0; i < len; i++)
        scanf("%d", &list[i]);
    sort(list, len);
    printf("Mean = %lf\n", mean(list, len));
    printf("Std dev = %lf\n", stddev(list, len));
    printf("Median = %lf\n", median(list, len));
    return 0;
}