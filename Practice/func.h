#include <math.h>

double mean(double arr[], int len){
    double sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return sum / len;
}

double sumOfSqr(double arr[], int len){
    double xbar = mean(arr, len);
    double ss = 0;
    for (int i = 0; i < len; i++)
        ss += pow(arr[i] - xbar,2);
    return ss;
}

void accOrRejT(double tval, int dof){
    double sig10, sig5, sig1;
    printf("Enter t-value at %ddof at 10%% significance: ", dof);
    scanf("%lf", &sig10);
    printf("Enter t-value at %ddof at  5%% significance: ", dof);
    scanf("%lf", &sig5);
    printf("Enter t-value at %ddof at  1%% significance: ", dof);
    scanf("%lf", &sig1);
    printf("The value of t-test at %d dof is %lf\n", dof, tval);
    if (sig10 > tval)
        printf("Since calculated t-value is less than t(0.10), thus H0 may be accepted at 10%% level of significance");
    else if (sig5 > tval)
        printf("Since calculated t-value is less than t(0.05), thus H0 may be accepted at  5%% level of significance");
    else if (sig1 > tval)
        printf("Since calculated t-value is less than t(0.01), thus H0 may be accepted at  1%% level of significance");
    else
        printf("Since calculated t-value is more than t(0.01), thus H0 may be rejected at  1%% level of significance");
}

void accOrRejF(double fval, int dof1, int dof2){
    double sig10, sig5, sig1;
    printf("Enter f-value at (%d, %d) dof at 90%% confidence: ", dof1,  dof2);
    scanf("%lf", &sig10);
    printf("Enter f-value at (%d, %d) dof at 95%% confidence: ", dof1,  dof2);
    scanf("%lf", &sig5);
    printf("Enter f-value at (%d, %d) dof at 99%% confidence: ", dof1,  dof2);
    scanf("%lf", &sig1);

    printf("The value of f-test at (%d, %d) dof is %lf\n", dof1,  dof2, fval);
    if (sig10 > fval)
        printf("It is accepted at 90%% confidence");
    else if (sig5 > fval)
        printf("It is accepted at 95%% confidence");
    else if (sig1 > fval)
        printf("It is accepted at 99%% confidence");
    else
        printf("It is rejected at all level");
}