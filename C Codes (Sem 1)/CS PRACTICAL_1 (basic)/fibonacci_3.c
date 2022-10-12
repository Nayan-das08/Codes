//Displaying Fibonacci series

# include <stdio.h>

void main()
    {
        int a, b, i=1, n, term=0, sum=0;
        printf("FIBONACCI SERIES");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);
        a = 0;
        b = 1;
        term = a + b;
        sum += term;

        printf("The series upto %d terms is :- \n0  1  ", n);
        while (i<=n-2)
            {
                sum += term;
                printf("%d  ", term); 
                a = b;
                b = term;
                term = a + b; 
                i++;      
            }
        printf("\n\nThe sum of fibonacci series upto %d terms is : %d", n, sum);
    }