//Write a program to Develop complete mini project using arrays, strings and functions.


#include <stdio.h>

// Structure for student details
struct Student
{
    int rollNo;
    char name[30];
    float m1, m2, m3, m4, m5;
    float total;
    float percentage;
};

int main()
{
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of 5 Subjects:\n");
    scanf("%f %f %f %f %f",
          &s.m1, &s.m2, &s.m3, &s.m4, &s.m5);

    // Calculate total
    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;

    // Calculate percentage
    s.percentage = s.total / 5;

    // Display result
    printf("\n===== Examination Result =====\n");
    printf("Roll No    : %d\n", s.rollNo);
    printf("Name       : %s\n", s.name);
    printf("Total      : %.2f\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);

    if(s.percentage >= 40)
    {
        printf("Result     : PASS\n");
    }
    else
    {
        printf("Result     : FAIL\n");
    }

    return 0;
}