/*
Question: The daily max temparatures recorded in 4 cities during the month of January for the starting 10 days have been recorded.
        Write a program to read the table elements into 2 Dim array temps and print the following:
        i.  Highest temperature
        ii. Lowest temparature
*/

#include <stdio.h>

int main() {
    int temps[10][4];
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("Enter the temps on %2dth of Jan: ", i + 1);
        scanf("%d %d %d %d", &temps[i][0], &temps[i][1], &temps[i][2], &temps[i][3]);
    }
    int min = temps[0][0];
    int min_city = 1, min_day = 1;
    int max = temps[0][0];
    int max_city = 1, max_day = 1;
    for (i = 0;i < 10;i++) {
        for (j = 0; j < 4;j++) {
            if (temps[i][j] < min) {
                min = temps[i][j];
                min_day = i + 1;
                min_city = j + 1;
            }
            if (temps[i][j] > max) {
                max = temps[i][j];
                max_day = i + 1;
                max_city = j + 1;
            }
        }
    }
    printf("The min temp was %d on day %d of City %d\n", min, min_day, min_city);
    printf("The max temp was %d on day %d of City %d\n", max, max_day, max_city);
    return 0;
}

/*
Output:
        Enter the temps on  1th of Jan:   2   8  18  42
        Enter the temps on  2th of Jan:   3 -20 -28  -8
        Enter the temps on  3th of Jan:  10  17 -33  32
        Enter the temps on  4th of Jan:   8 -46   4  29
        Enter the temps on  5th of Jan: -18  16  23 -22
        Enter the temps on  6th of Jan:  16 -17 -44   0
        Enter the temps on  7th of Jan:  47 -39  -5 -12
        Enter the temps on  8th of Jan: -25  49  23   1
        Enter the temps on  9th of Jan:  16   4 -21 -23
        Enter the temps on 10th of Jan:  36  11  23  16
        The min temp was -46 on day 4 of City 2
        The max temp was 49 on day 8 of City 2
*/