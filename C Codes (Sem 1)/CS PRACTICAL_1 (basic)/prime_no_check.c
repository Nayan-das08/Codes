//Check if a number is prime or not

# include <stdio.h>

void main()
    {
        int n, i, r, flag = 0;
        printf("CHECKING FOR PRIME NUMBERS");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);

        for (i=2; i<n; i++)
            {
                r = n%i;
                if (r == 0)
                    {
                        flag = 1;
                        break;
                    }
            }
        if (flag == 1)
            printf("The number %d is not a prime number", n);
        else
            printf("The number %d is a prime number", n);
    }