//Print all Strong numbers between 1 to n

# include <stdio.h>

void main()
    {
        int n, i, j, temp, r, fact, sum, strong=0;
        unsigned long a;
        printf("PRINT ALL STRONG NUMBERS BETWEEN 1 AND N");
        printf("\n\nEnter the number till which number is to be printed : ");
        scanf("%d", &a);

        printf("\nThe strong numbers from 1 to %d are :-\n", a);
        for (i=1; i<a; i++)
            {
                temp = i;
                sum = 0;
                while (i != 0)
                    {
                        r = i % 10;
                        if (r == 0)
                            fact = 1;
                        else
                            {
                                fact = 1;
                                for (j=2; j<=r; j++)
                                    fact = fact * j;
                            }
                        sum = sum + fact;
                        i = i / 10;
                    }
                i = temp;
                if (i == sum)
                        printf("%d  ", sum);
            }

    }