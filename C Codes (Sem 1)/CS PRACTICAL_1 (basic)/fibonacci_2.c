//Displaying Fibonacci series

# include <stdio.h>

void main()
    {
        int a, b, n, term=0, sum=0;
        printf("FIBONACCI SERIES");
        printf("\n\nEnter the no. till which series is to be displayed : ");
        scanf("%d", &n);
        a = 0;
        b = 1;
        term = a + b;
        sum += term;

        printf("The series till %d is :- \n0  1  ", n);
        while (n>term)
            {
                sum += term;
                printf("%d  ", term);
                a = b;
                b = term;
                term = a + b;       
            }
        printf("\n\nThe sum of fibonacci series till %d is : %d", n, sum);
    }