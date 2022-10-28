#include <stdio.h>
#include <string.h>

int main() {
    char str1[1024], str2[1024];
    printf("Enter the String 1: ");
    gets(str1);
    printf("Enter the String 2: ");
    gets(str2);
    strcat(str1, str2);
    printf("%s", str1);
}
