//Pattern 4

# include <stdio.h>

void main()
    {
        int i, j;
        printf("PATTERN 4\n\n");
        for (i=1; i<=3; i++)
            {
                for (j=3; j>=1; j--)
                    printf("%d", j);
                printf("\n");
            }
    }