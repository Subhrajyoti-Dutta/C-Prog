/*
Question: The daily max temparatures recorded in 4 cities during the month of January for the starting 10 days have been recorded.
        Write a program to read the table elements into 2 Dim array temps and print the following:
        i.  Highest temperature
        ii. Lowest temparature
*/

#include <stdio.h>

int main() {
    double temps[10][4];
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("Enter the temparatures on %2dth of Jan: ", i + 1);
        scanf("%lf %lf %lf %lf", &temps[i][0], &temps[i][1], &temps[i][2], &temps[i][3]);
    }
    double min = temps[0][0];
    int min_city = 1, min_day = 1;
    double max = temps[0][0];
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
    printf("The minimum temparature was %lf on Day %d of City %d\n", min, min_day, min_city);
    printf("The maximum temparature was %lf on Day %d of City %d\n", max, max_day, max_city);
    return 0;
}

/*
Output:
        Enter the temparatures on  1th of Jan: -41.220 -23.341  45.192 -31.039
        Enter the temparatures on  2th of Jan: -12.921  27.161  -6.792 -16.324
        Enter the temparatures on  3th of Jan:  30.187  14.680  -8.329 -29.306
        Enter the temparatures on  4th of Jan:  32.019  17.793  35.202 -47.918
        Enter the temparatures on  5th of Jan: -41.188  25.348 -40.284   8.717
        Enter the temparatures on  6th of Jan: -20.151 -49.986  -7.169  47.346
        Enter the temparatures on  7th of Jan: -44.321  44.424  16.496  38.626
        Enter the temparatures on  8th of Jan:   8.323 -36.176 -13.089   5.517
        Enter the temparatures on  9th of Jan:  46.068 -45.286  -8.462  13.621
        Enter the temparatures on 10th of Jan:   8.892  28.472  -6.379 -29.900
        The minimum temparature was -49.986000 on Day 6 of City 2
        The maximum temparature was 47.346000 on Day 6 of City 4
*/