#include <stdio.h>
#include "func.h"

double tvalue(double arr[], int len){
    double dbar = mean(arr, len);
    double S2   = sumOfSqr(arr, len) / (len - 1);
    return fabs(dbar)/sqrt(S2/len);
}

int main(){
    double arr1[1000], arr2[1000], d[1000];
    int len;
    printf("Enter the size of the groups: ");
    scanf("%d", &len);
    printf("Enter the values of group 1: ");
    for (int i = 0; i < len; i++)
        scanf("%lf", &arr1[i]);
    printf("Enter the values of group 2: ");
    for (int i = 0; i < len; i++)
        scanf("%lf", &arr2[i]);
    for (int i = 0; i < len; i++)
        d[i] = arr1[i] - arr2[i];
    double tval = tvalue(d, len);
    accOrRejT(tval, len - 1);
    return 0;
}