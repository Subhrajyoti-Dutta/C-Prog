/*
Question: Write a program to input three strings by
    the user and print the concatenated string of all
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1024], str2[1024], str3[1024], str[1024];
    printf("Enter the String 1: ");
    gets(str1);
    printf("Enter the String 2: ");
    gets(str2);
    printf("Enter the String 3: ");
    gets(str3);
    int i = 0, j = 0;
    while (str1[j] != '\0')
        str[i++] = str1[j++];
    j = 0;
    while (str2[j] != '\0')
        str[i++] = str2[j++];
    j = 0;
    while (str3[j] != '\0')
        str[i++] = str3[j++];
    str[i] = '\0';
    printf("The concat string is %s", str);
}

/*Output:
    Enter the String 1: Hello
    Enter the String 2: World
    Enter the String 3: !!
    The concat string is HelloWorld!!
*/