//To check whether a number is Prime, Armstrong or Perfect number using functions

# include <stdio.h>

void prime(int x)
    {
        int i, flag=0;
        for (i=2; i<x; i++)
            {
                if (x%i == 0)
                    {
                        flag = 1;
                        break;
                    }
            }
        if (flag == 1)
            printf("\nThe number %d is not a prime number", x);
        else
            printf("\nThe number %d is a prime number", x);
    }

void armstrong(int x)
    {
        int temp=x, r, m=0;
        while (x != 0)
            {
                r = x % 10;
                m = m + (r*r*r);
                x = x / 10;
            }
        x = temp;
        if (x == m)
            printf("\nThe number %d is an armstrong number", x);
        else
            printf("\nThe number %d is not an armstrong number", x);
    }

void perfect(int x)
    {
        int temp=x, r, m=1, i;
        for (i=2; i<=(x/2); i++)
            {
                r = x % i;
                if (r == 0)
                    m += i;
            }
        x = temp;
        if (x == m)
            printf("\nThe number %d is a perfect number", x);
        else
            printf("\nThe number %d is not a perfect number", x);
    }

void main()
    {
        int n;
        printf("CHECKING FOR PRIME, ARMSTRONG AND PERFECT NUMBER");
        printf("\n\nEnter a number : ");
        scanf("%d", &n);

        prime(n);
        armstrong(n);
        perfect(n);
    }