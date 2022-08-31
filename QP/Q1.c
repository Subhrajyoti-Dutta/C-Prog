#include <stdio.h>

int main() {
    long m, n, d;
    printf("Lower range: ");
    scanf("%ld", &m);
    printf("Upper range: ");
    scanf("%ld", &n);
    printf("Number to check divisibility: ");
    scanf("%ld", &d);
    printf("Following are the numbers divisible by %ld between %ld and %ld:\n", d, m, n);
    for (int i = m; i <= n;i++) {
        if (i % d == 0)
            printf("%ld\n", i);
    }
}