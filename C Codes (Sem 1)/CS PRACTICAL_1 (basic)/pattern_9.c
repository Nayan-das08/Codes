// Pattern 9

# include <stdio.h>

void main()
    {
        int i, j, k=3;
        printf("PATTERN 9\n\n");
        for (i=1; i<=3; i++)
            {
                for (j=1; j<=i; j++)
                    printf("%d", k);
                printf("\n");
                k--;
            }        
    }