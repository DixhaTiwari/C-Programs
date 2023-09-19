/*
   Print the Pascal Triangle
            1
            1 1
            1 2 1
            1 3 3 1
            1 4 6 4 1
            1 5 10 10 5 1       */


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
            for(j=0;j<=i;j++)
            {
            int iCj = Combination(i,j);
            printf(" %d ",iCj);
         }
         printf("\n");
        }


        return 0;
     }

