//Write a program to Create marksheet generation system

#include <stdio.h>

// Structure for student details
struct Student
{
    int rollNo;
    char name[30];
    float m1, m2, m3;
    float total, percentage;
    char grade;
};

int main()
{
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of 3 Subjects:\n");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    // Calculate total and percentage
    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    // Find grade
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display marksheet
    printf("\n===== MARKSHEET =====\n");
    printf("Roll No    : %d\n", s.rollNo);
    printf("Name       : %s\n", s.name);
    printf("Total      : %.2f\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Grade      : %c\n", s.grade);

    return 0;
}