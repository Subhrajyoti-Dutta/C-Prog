#include <stdio.h>

int main() {
    int arr[100], len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    printf("Enter %d numbers: ", len);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    //Sorting
    int temp;
    for (int i = 0; i < len; i++)
        for (int j = i; j > 0; j--)
            if (arr[j - 1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }

    //printing the array
    printf("Sorted list of numbers: ");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    double med = (len % 2 == 0) ? (arr[len / 2] + arr[len / 2 - 1]) / 2.0 : (arr[len / 2]);
    printf("\nMedian = %lf", med);
    return 0;
}