#include <stdio.h>
#include <math.h>

int isArmstrong(long num) {
    long temp = 0, temp2 = num, count = log10(num) + 1;
    for (int i = 0; i < count; i++) {
        temp += pow(num % 10, count);
        num /= 10;
    }
    if (temp == temp2)
        return 1;
    return 0;
}

int main() {
    long n, m;
    printf("Lower range: ");
    scanf("%ld", &m);
    printf("Upper range: ");
    scanf("%ld", &n);
    printf("Following are the armstrong numbers between %ld and %ld:\n", m, n);
    for (int i = m; i < n;i++) {
        if (isArmstrong(i))
            printf("%d\n", i);
    }
}