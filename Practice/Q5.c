#include <stdio.h>
#include "func.h"

double tvalue(double arr1[], int len1, double arr2[], int len2, double mu1, double mu2){
    double xbar1 = mean(arr1, len1);
    double xbar2 = mean(arr2, len2);
    double S2 = (sumOfSqr(arr1, len1) + sumOfSqr(arr2, len2))/(len1 + len2 - 2);
    return fabs((xbar1 - xbar2) - (mu1 - mu2))/sqrt(S2*(1.0/len1+1.0/len2));
}

int main(){
    double arr1[1000], arr2[1000], mu1, mu2;
    int len1, len2;
    printf("Enter the population mean of group 1: ");
    scanf("%lf", &mu1);
    printf("Enter the size of group 1: ");
    scanf("%d", &len1);
    printf("Enter the values: ");
    for (int i = 0; i < len1; i++)
        scanf("%lf", &arr1[i]);
    printf("Enter the population mean of group 2: ");
    scanf("%lf", &mu2);
    printf("Enter the size of group 2: ");
    scanf("%d", &len2);
    printf("Enter the values: ");
    for (int i = 0; i < len2; i++)
        scanf("%lf", &arr2[i]);
    double tval = tvalue(arr1, len1, arr2, len2, mu1, mu2);
    accOrRejT(tval, len1 + len2 - 2);
    return 0;
}