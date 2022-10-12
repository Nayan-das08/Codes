//Print multiplication table of any number

# include <stdio.h>

void main()
    {
        int i, n;
        printf("MULTIPLICATION TABLE");
        printf("\n\nEnter the whose multiplication table is to displayed : ");
        scanf("%d", &n);
        printf("\nThe table of %d :-\n", n);

        for (i=1; i<=10; i++)
            {
                if (i == 10)
                    printf("%d x %d = %d\n", n, i, n*i);
                else
                    printf("%d x %d  = %d\n", n, i, n*i);
            }
    }