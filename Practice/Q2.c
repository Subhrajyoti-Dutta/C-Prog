#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int t;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j != i) {
                t = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = t;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}