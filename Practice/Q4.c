//Q8a.c

#include <stdio.h>
#include "func.h"

double tvalue(double arr[], int len, double mu){
    double xbar = mean(arr, len);
    double S2   = sumOfSqr(arr, len) / (len - 1);
    return fabs(xbar - mu)/sqrt(S2/len);
}

int main(){
    double arr[1000], mu, tval;
    int len;
    printf("Enter population mean: ");
    scanf("%lf",&mu);
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    printf("Enter the values: ");
    for (int i = 0; i < len; i++)
        scanf("%lf",&arr[i]);
    tval = tvalue(arr, len, mu);
    accOrRejT(tval, len-1);
}