//Find power of a number using for loop

# include <stdio.h>

void main()
    {
        int n, i, exp;
        long prod=1;
        printf("POWER OF A NUMBER");
        printf("\n\nEnter the base     : ");
        scanf("%d", &n);
        printf("Enter the exponent : ");
        scanf("%d", &exp);

        for (i=1; i<=exp; i++)
            {
                prod *= n;
            }   

        printf("%d^%d = %d", n, exp, prod);
    }