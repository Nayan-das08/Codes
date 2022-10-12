// Pattern 13

# include <stdio.h>

void main()
    {
        int i, j;
        printf("PATTERN 13\n\n");
        for (i=1; i<=5; i++)
            {
                for (j=1; j<=(5-i); j++)
                    printf(" ");
                for (j=1; j<=i; j++)
                    printf("%d", 6-j);
                for (j=(i-1); j>=1; j--)
                    printf("%d", 6-j);
                printf("\n");
            }
    }