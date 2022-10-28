#include <stdio.h>
#include <string.h>

int main() {
    char str1[1024], str2[1024];
    printf("Enter the String 1: ");
    gets(str1);
    printf("Enter the String 2: ");
    gets(str2);
    int len1 = 0, j = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[j] != '\0') {
        str1[len1 + j] = str2[j];
        j++;
    }
    str1[len1 + j] = '\0';
    printf("%s", str1);
}
