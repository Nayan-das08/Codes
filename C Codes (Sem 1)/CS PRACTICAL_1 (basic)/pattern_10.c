// Pattern 10

# include <stdio.h>

void main()
    {
        int i, j, k=3;
        printf("PATTERN 10\n\n");
        for (i=1; i<=3; i++)
            {
                k=3;
                for (j=1; j<=i; j++)
                    printf("%d", k--);
                printf("\n");
            }
    }