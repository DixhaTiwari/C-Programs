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
    struct student *ptr=&s1;
    
    printf("Information for s1");
    printf("\n %d %s %f", ptr->rollno,ptr->name,ptr->marks);
  // or we can write (*ptr).rollno
}