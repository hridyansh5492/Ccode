#include <stdio.h>
#include <string.h>

struct Student
{
    char name[30];
    float gpa;
};

int main()
{
    struct Student stu1 = {"gro", 6.0};
    struct Student stu2 = {"pro", 4.0};
    struct Student stu3 = {"sro", 5.0};
    struct Student stu4 = {"tro", 7.5};

    struct Student students[] = {stu1, stu2, stu3, stu4};

    for(int i=0; i<sizeof(students)/sizeof(students[0]); i++)
    {
        printf("Name: %-10s\t", students[i].name);
        printf("Gpa: %.2f\n", students[i].gpa);
    }
}