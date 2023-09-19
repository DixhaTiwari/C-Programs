#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s1={1,"Jenny",90};
    struct student s2={2,"Jiya",85};
    printf("Information for s1");
    printf("\n %d %s %f, s1.rollno,s1.name,s1.marks");
    printf("Information for s2");
    printf("\n %d %s %f, s2.rollno,s2.name,s2.marks");
}