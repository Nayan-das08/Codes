//Print all even numbers between 1 to 100

# include <stdio.h>

void main()
    {
        int i;
        printf("EVEN NUMBERS BETWEEN 1 TO 100:-\n");
        for (i=1; i<=50; i++)
            {
                printf("%d\t", 2*i);
                if (i%10 == 0)
                    printf("\n");
            }
    }