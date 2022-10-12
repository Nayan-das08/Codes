// Pattern 6

# include <stdio.h>

void main()
    {
        int i, j;
        printf("PATTERN 6\n\n");
        for (i=1; i<=3; i++)
            {
                for (j=1; j<=i; j++)
                    printf("*");
                printf("\n");
            }
    }