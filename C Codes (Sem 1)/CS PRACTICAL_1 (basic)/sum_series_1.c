//Sum of series : 2+4+6+8... till n terms

# include <stdio.h>

void main()
    {
        int n, sum=0, i;
        printf("SUM OF SERIES 2+4+6+8... TILL N TERMS");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);
        for (i=1; i<=n; i++)
            {
                sum += 2*i;
            }
        printf("The sum of the series 2+4+6+8... till %d terms = %d", n, sum);
    }