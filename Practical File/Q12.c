#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter the string: ");
    gets(str);
    int leng = strlen(str);
    int flag = 0;
    for (int i = 0; i < leng / 2; i++) {
        if (str[i] != str[leng - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
    return 0;
}
