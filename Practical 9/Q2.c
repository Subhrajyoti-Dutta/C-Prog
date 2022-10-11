/*
Question: Write a program to sort an array
        and find median of it using functions.
*/

#include <stdio.h>

void sort(int arr[], int len) {
    int temp;
    for (int i = 0; i < len; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j - 1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

double median(int sortedArr[], int len) {
    if (len % 2 == 0) {
        return (sortedArr[len / 2] + sortedArr[len / 2 - 1]) / 2.0;
    }
    else {
        return (sortedArr[len / 2]);
    }
}

int main() {
    int list[100], len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    printf("Enter %d numbers: ", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &list[i]);
    }
    sort(list, len);
    printf("Sorted list of numbers: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", list[i]);
    }
    printf("\nMedian = %lf", median(list, len));
    return 0;
}

/* Output:
    Enter the number of elements: 10
    Enter 10 numbers: 22 12 6 59 98 57 91 68 22 2
    Sorted list of numbers: 2 6 12 22 22 57 59 68 91 98
    Median = 39.500000
*/