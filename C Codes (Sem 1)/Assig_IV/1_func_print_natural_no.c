//Print all natural numbers between 1 to n using function

# include <stdio.h>

void natural_no(int n)
    {
        int i;
        for (i=1; i<=n; i++)
            {
                if (i%20 == 0)
                    printf("%d  \n", i);
                else
                    printf("%d  ", i);
            }
    }

void main()
    {
        int n;
        printf("ALL NATURAL NUMBERS FROM 1 TO N");
        printf("\n\nEnter the number till which natural no. are to be printed : ");
        scanf("%d", &n);
        printf("\nThe Natural numbers from 1 to %d :-\n", n);
        natural_no(n);
    }