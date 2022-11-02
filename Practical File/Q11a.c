#include <stdio.h>
#include <string.h>

int main() {
    char str1[1024], str2[1024];
    printf("Enter the String 1: ");
    gets(str1);
    printf("Enter the String 2: ");
    gets(str2);
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i + j] = str2[j];
        j++;
    }
    str1[i + j] = '\0';
    printf("The concatenated string is %s", str1);
}
