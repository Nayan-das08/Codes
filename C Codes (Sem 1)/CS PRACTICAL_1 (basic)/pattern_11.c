// Pattern 11

# include <stdio.h>

void main()
    {
        int i, j;
        printf("PATTERN 11\n\n");
        for (i=1; i<=5; i++)
            {
                for (j=1; j<=(5-i); j++)
                    printf(" ");
                for (j=1; j<=i; j++)
                    printf("%d", j);
                for (j=(i-1); j>=1; j--)
                    printf("%d", j);
                printf("\n");
            }
    }