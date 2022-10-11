/*
Question: Write a program to input a string and
        print if it is an alnum or not
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter the string: ");
    gets(str);
    int flag = 0, ascii;
    int leng = strlen(str);
    // printf("%d\n", leng);
    for (int i = 0; i < leng; i++) {
        ascii = str[i];
        // printf("%c %d\n", ascii, ascii);
        if (!(
            (ascii >= 48 && ascii <= 57) ||
            (ascii >= 65 && ascii <= 90) ||
            (ascii >= 97 && ascii <= 122) ||
            (ascii == 32)
            )) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("It is an alnum\n");
    }
    else {
        printf("It is not an alnum\n");
    }
    return 0;
}

/*Output 1:
    Enter the string: 99balloons
    It is an alnum
Output 2:
    Enter the string: goat
    It is an alnum
Output 3:
    Enter the string: 5468
    It is an alnum
Output 4:
    Enter the string: #sarcasm
    It is not an alnum
*/