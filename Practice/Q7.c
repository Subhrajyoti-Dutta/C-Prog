#include <stdio.h>
#include <math.h>
#include "func.h"

// double mean(double arr[], int len){
//     double sum = 0;
//     for (int i = 0; i < len; i++){
//         sum += arr[i];
//     }
//     return sum / len;
// }

// double svar(double arr[], int len){
//     double xbar = mean(arr,len);
//     double sum = 0;
//     for (int i = 0; i < len; i++){
//         sum += pow(arr[i] - xbar, 2);
//     }
//     return sum;
// }

double cov(double arr1[], double arr2[], int len){
    double sum = 0;
    double xbar = mean(arr1, len);
    double ybar = mean(arr2, len);

    for (int i = 0; i < len; i++){
        sum += (arr1[i] - xbar)*(arr2[i] - ybar);
    }
    return sum;
}

double tvalue(double arr1[], double arr2[], int len){
    double Sx2 = sumOfSqr(arr1, len);
    double Sy2 = sumOfSqr(arr2, len);
    double covar = cov(arr1, arr2, len);
    double r = covar / sqrt(Sx2 * Sy2);

    return sqrt((len-2) * pow(r,2) / (1-pow(r,2)));
}

int main(){
    double arr1[1000], arr2[1000], tval;
    int len;
    printf("Enter the size of the groups: ");
    scanf("%d", &len);
    printf("Enter the values of group 1: ");
    for (int i = 0; i < len; i++)
        scanf("%lf", &arr1[i]);
    printf("Enter the values of group 2: ");
    for (int i = 0; i < len; i++)
        scanf("%lf", &arr2[i]);
    tval = tvalue(arr1, arr2, len);
    accOrRejT(tval, len - 2);
}