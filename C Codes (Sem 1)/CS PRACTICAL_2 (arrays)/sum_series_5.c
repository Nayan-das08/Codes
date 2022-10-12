//Sum of series : 1! + 2! + 3! + 4! + 5!... upto n terms

# include <stdio.h>

void main()
    {
        int i, j, n;
        long fact, sum=0;
        printf("SUM OF SERIES : 1! + 2! + 3! + 4! + 5!... UPTO N TERMS");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);
        
        for (i=1; i<=n; i++)
            {
                fact=1;
                for (j=1; j<=i; j++)
                    fact = fact*j;
                sum += fact;
            }
        printf("Sum of series : 1! + 2! + 3! + 4! + 5!... %d terms : %ld", n, sum);
    }