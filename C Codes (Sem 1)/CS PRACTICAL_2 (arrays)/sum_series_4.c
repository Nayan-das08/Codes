//Sum of series : 1 - 1/2 + 1/3 - 1/4 + 1/5... up to n terms

# include <stdio.h>
# include <math.h>

void main()
    {
        int i, n;
        float sum=0;
        printf("SUM OF SERIES : 1 - 1/2 + 1/3 - 1/4 + 1/5... UPTO N TERMS");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);
        for (i=1; i<=n; i++)
            {
                sum += pow(-1,i-1)/i;
            }  
        printf("The sum of series : 1 - 1/2 + 1/63 - 1/4 + 1/5... upto %d terms : %f", n, sum);
    }