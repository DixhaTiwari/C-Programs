/* Find the difference between the sum of
 elements at even indices to the sum of elements at
 odd indices. */

 #include<stdio.h>
 int main()
 {
 int arr[6]= {1,3,5,7,9,11};
 int i,Sum_Even=0,Sum_Odd=0, Difference;
 for(i=0;i<=5;i++)
 {
    if(i%2==0)
    {
        Sum_Even = Sum_Even + arr[i];
    }
    else
    {
        Sum_Odd = Sum_Odd + arr[i];
    }
     Difference =  Sum_Odd - Sum_Even;
 }
 printf("%d",Difference);
 
 return 0;
 }
