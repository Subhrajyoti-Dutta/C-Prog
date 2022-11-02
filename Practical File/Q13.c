#include <stdio.h>

struct Student {
    int s1, s2, s3;
    int t;
};

int totalMarks(struct Student s) {
    return s.s1 + s.s2 + s.s3;
}

int main() {
    struct Student stud[10];
    struct Student total;
    total.s1 = 0;
    total.s2 = 0;
    total.s3 = 0;
    total.t = 0;
    int i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter the marks of %dth student in all subjects:\n", i);
        scanf("%d %d %d", &stud[i].s1, &stud[i].s2, &stud[i].s3);
        stud[i].t = totalMarks(stud[i]);
        total.s1 += stud[i].s1;
        total.s2 += stud[i].s2;
        total.s3 += stud[i].s3;
        total.t += stud[i].t;
    }
    printf("Marks obtained by the students are:\n");
    for (i = 1; i <= n; i++) {
        printf("Marks of %dth student is:\n", i);
        printf("Subject 1: %d\n", stud[i].s1);
        printf("Subject 2: %d\n", stud[i].s2);
        printf("Subject 3: %d\n", stud[i].s3);
        printf("Total:     %d\n", stud[i].t);
    }
    printf("Subject-wise total marks are:\n");
    printf("Subject 1: %d\n", total.s1);
    printf("Subject 2: %d\n", total.s2);
    printf("Subject 3: %d\n", total.s3);
    printf("Grand Total: %d\n", total.t);
}

/*Output:
    Enter number of students: 3
    Enter the marks of 1th student in all subjects:
    25 34 32
    Enter the marks of 2th student in all subjects:
    68 75 69
    Enter the marks of 3th student in all subjects:
    94 86 88
    Marks obtained by the students are:
    Marks of 1th student is:
    Subject 1: 25
    Subject 2: 34
    Subject 3: 32
    Total:     91
    Marks of 2th student is:
    Subject 1: 68
    Subject 2: 75
    Subject 3: 69
    Total:     212
    Marks of 3th student is:
    Subject 1: 94
    Subject 2: 86
    Subject 3: 88
    Total:     268
    Subject-wise total marks are:
    Subject 1: 187
    Subject 2: 195
    Subject 3: 189
    Grand Total: 571
*/