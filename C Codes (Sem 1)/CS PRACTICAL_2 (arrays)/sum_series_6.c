//Sum of series : -1^3 + 3^3 - 5^3 + 7^3 - 9^3... till n terms

# include <stdio.h>
# include <math.h>

void main()
    {
        long sum=0;
        int i, n;
        printf("SUM OF SERIES : -1^3 + 3^3 - 5^3 + 7^3 - 9^3... UPTO N TERMS");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);

        for (i=1; i<=n; i++)
            {
                sum += pow(-1,i)*pow((2*i-1),3);
            }
        printf("The sum of the series -1^3 + 3^3 - 5^3 + 7^3 - 9^3... till %d terms = %ld",n , sum);
    }
