/*
Question: Write a program to make a structure
        with three subject members and total
        percentage for 5 students.
*/

#include <stdio.h>

struct Student {
        int marks[3];
        double percent;
};

double percentage(int marks[], int len, int fullMarks) {
        double total = 0;
        for (int i = 0; i < len; i++) {
                total += marks[i];
        }
        return total / (fullMarks * len) * 100;
}

int main() {
        struct Student stu[5];
        int fm;
        printf("Enter the full marks per subject: ");
        scanf("%d", &fm);
        printf("Enter the data for 5 students:\n");
        for (int i = 0; i < 5; i++) {
                printf("Student %d\n", i + 1);
                for (int j = 0; j < 3; j++) {
                        printf("\tSubject %d: ", j + 1);
                        scanf("%d", &stu[i].marks[j]);
                }
                stu[i].percent = percentage(stu[i].marks, 3, fm);
        }

        printf("\nFollowing are the student data provided:\n");
        for (int i = 0; i < 5; i++) {
                printf("Student %d\n", i + 1);
                for (int j = 0; j < 3; j++) {
                        printf("\tSubject %d: %d", j + 1, stu[i].marks[j]);
                }
                printf("\n\tPercentage = %lf\n", stu[i].percent);
        }
}

/* Output:
    Enter the full marks per subject: 100
    Enter the data for 5 students:
    Student 1
            Subject 1: 45
            Subject 2: 65
            Subject 3: 85
    Student 2
            Subject 1: 45
            Subject 2: 95
            Subject 3: 75
    Student 3
            Subject 1: 12
            Subject 2: 65
            Subject 3: 68
    Student 4
            Subject 1: 13
            Subject 2: 23
            Subject 3: 42
    Student 5
            Subject 1: 89
            Subject 2: 87
            Subject 3: 59

    Following are the student data provided:
    Student 1
            Subject 1: 45   Subject 2: 65   Subject 3: 85
            Percentage = 65.000000
    Student 2
            Subject 1: 45   Subject 2: 95   Subject 3: 75
            Percentage = 71.666667
    Student 3
            Subject 1: 12   Subject 2: 65   Subject 3: 68
            Percentage = 48.333333
    Student 4
            Subject 1: 13   Subject 2: 23   Subject 3: 42
            Percentage = 26.000000
    Student 5
            Subject 1: 89   Subject 2: 87   Subject 3: 59
            Percentage = 78.333333
*/