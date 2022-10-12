// Pattern 12

# include <stdio.h>

void main()
    {
        int i, j, a=1, b=0, zero=0;
        printf("PATTERN 12\n\n");
        for (i=1; i<=5; i++)
            {
                if (i%2 == 0)
                    {
                        for (j=1; j<=i; j++)
                            if (j%2 != 0)
                                printf("0");
                            else 
                                printf("1");
                    }
                else
                    {
                        for (j=1; j<=i; j++)
                            if (j%2 == 0)
                                printf("0");
                            else 
                                printf("1");
                    }
                printf("\n");
            }
    }