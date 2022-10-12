//Check whether a number is Strong number or not

# include <stdio.h>

void main()
    {
        int n, i, temp, r, fact=1, sum=0;
        printf("CHECKING FOR STRONG NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;

        while (n != 0)
            {
                r = n % 10;
                if (r == 0)
                    fact = 1;
                else
                    {
                        fact = 1;
                        for (i=2; i<=r; i++)
                            fact = fact * i;
                    }
                sum = sum + fact;
                n = n / 10;
            }
        n = temp;
        if (n == sum)
            printf("The number %d is a Strong number", n);
        else
            printf("The number %d is not a Strong number", n);
    }