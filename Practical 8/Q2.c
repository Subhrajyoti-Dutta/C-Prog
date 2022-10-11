/*
Question: Write a program to input a string and
        print if it is a palindrome or not
*/

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
    if (flag == 0) {
        printf("It is a palindrome\n");
    }
    else {
        printf("It is not a palindrome\n");
    }
    return 0;
}

/*Output 1:
    Enter the string: malayalam
    It is a palindrome
Output 2:
    Enter the string: trace
    It is not a palindrome
Output 3:
    Enter the string: 5445
    It is a palindrome
Output 4:
    Enter the string: 8oo8
    It is a palindrome
*/