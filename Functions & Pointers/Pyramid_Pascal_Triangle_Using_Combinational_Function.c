/* Print the Pyramid Pascal Triangle
            1
           1 1
          1 2 1
         1 3 3 1
        1 4 6 4 1
      1 5 10 10 5 1
     1 6 15 20 15 6 1        */


     #include<stdio.h>

    int factorial(int x)
    {
        int fact = 1;
        for(int i=1;i<=x;i++)
        {
            fact = fact*i;
        }
        return fact;
    }

    int Combination(int n, int r)
    {
        int nCr = factorial(n)/(factorial(r)*factorial(n-r)) ;
        return nCr;
    }

     int main()
     {
        int n,i,j,k;
        printf("Enter the n: ");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
            int z;
         for(j=0;j<=n+1-i;j++)
         {
            printf("  ",z);
        z++;
         }
         {
            for(k=0;k<=i;k++)
            {
            int iCj = Combination(i,k);
            printf(" %d ",iCj);

         }
         }
         printf("\n");
        }


        return 0;
     }

