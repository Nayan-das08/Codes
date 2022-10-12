//Sum of all odd numbers between 1 to n

# include <stdio.h>

void main()
    {
        int i, sum=0, n;
        printf("SUM OF ALL ODD NUMBERS BETWEEN 1 TO N");
        printf("\n\nEnter the value till which odd-sum is to be calculated : ");
        scanf("%d", &n);

        for (i=1; i<=n; i+=2)
            {
                sum += i;        
            }
        printf("Sum of all odd no. from 1 to %d = %d", n, sum);
    }