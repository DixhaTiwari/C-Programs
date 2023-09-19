/* Pascal Triangle Optimised Using Formula
       1
       1 1
       1 2 1
       1 3 3 1
       1 4 6 4 1
       1 5 10 10 5 1          */




#include<stdio.h>
     int main()
     {
        int n,i,j,k;
        printf("Enter the n: ");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
         {
            int first = 1;
            for(int j=0;j<=i;j++)
            {
            printf("%d ",first);
            first = first*(i-j)/(j+1);      // iC(j+1)
         }
         printf("\n");
        }


        return 0;
     }

