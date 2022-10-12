//Sum of series : 1/1! + 2/2! + 3/3! + 4/4! + 5/5!... upto n terms

# include <stdio.h>

void main()
    {
        int i, j, n;
        double sum=0, fact;
        printf("SUM OF SERIES : 1/1! + 2/2! + 3/3! + 4/4! + 5/5!... UPTO N TERMS");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);

        for (i=1; i<=n; i++)
            {
                fact=1;
                for (j=1; j<=i; j++)
                    fact = fact*j;
                sum += i/fact;
            }
        printf("Sum of series : 1/1! + 2/2! + 3/3! + 4/4! + 5/5!... upto %d terms = %lf", n, sum);
    }