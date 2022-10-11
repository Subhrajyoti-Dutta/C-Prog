/*
Question: Define a structure containing employee
        details that would contain name, date of
        joining, and salary. Using this structure
        write a program to read this information
        for three employees from keyboard and print
        the same detail on screen.
*/

#include <stdio.h>

struct Employee {
    char name[100];
    int date[3];        //{yyyy, mm, dd}
    double salary;
};

int main() {
    struct Employee employees[3];
    printf("Enter the data for 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        // fflush(stdin);
        printf("Employee %d\n", i + 1);
        printf("\tEnter the name of employee: ");
        gets(employees[i].name);
        printf("\tEnter the date of joining (yyyy mm dd): ");
        scanf("%d %d %d", &employees[i].date[0], &employees[i].date[1], &employees[i].date[2]);
        printf("\tEnter the salary of employee: ");
        scanf("%lf", &employees[i].salary);
        getchar();
    }

    printf("\nFollowing are the employee data provided:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d\n", i + 1);
        printf("\tName of employee: %s\n", employees[i].name);
        printf("\tDate of joining: %d-%d-%d\n", employees[i].date[0], employees[i].date[1], employees[i].date[2]);
        printf("\tSalary of employee: %lf\n", employees[i].salary);
    }
}

/* Output:
    Enter the data for 3 employees:
    Employee 1
        Enter the name of employee: Subhrajyoti Dutta
        Enter the date of joining (yyyy mm dd): 2020 12 17
        Enter the salary of employee: 56000
    Employee 2
        Enter the name of employee: Sweta Tripathi
        Enter the date of joining (yyyy mm dd): 2021 08 14
        Enter the salary of employee: 65000
    Employee 3
        Enter the name of employee: Harsh Sharma
        Enter the date of joining (yyyy mm dd): 2022 02 23
        Enter the salary of employee: 45000

    Following are the employee data provided:
    Employee 1
        Name of employee: Subhrajyoti Dutta
        Date of joining: 2020-12-17
        Salary of employee: 56000.000000
    Employee 2
        Name of employee: Sweta Tripathi
        Date of joining: 2021-8-14
        Salary of employee: 65000.000000
    Employee 3
        Name of employee: Harsh Sharma
        Date of joining: 2022-2-23
        Salary of employee: 45000.000000
*/