//Pattern 5

# include <stdio.h>

void main()
    {
        int i, j;
        printf("PATTERN 5\n\n");
        for (i=3; i>=1; i--)
            {
                for (j=1; j<=3; j++)
                    printf("%d", i);
                printf("\n");
            }
    }