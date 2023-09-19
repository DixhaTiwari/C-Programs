/* Ques: Given an array of marks of students, if the
 mark of any student is less than 35 print its roll
 number. [roll number here refers to the index of the
array.] */

#include<stdio.h>
int main()
{
int marks[10]= {95,90,31,25,100,50,65,89,97,30};
for(int i=0;i<=9;i++)
{
    if(marks[i]<35)
    {
    printf("%d ",i); //Since we don't wan't to print marks
    }                       // we wan't to print Roll No. so it will be i
}
return 0;
}
