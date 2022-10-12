//To check whether a number is even or odd using functions

# include <stdio.h>

void check_even_odd(int x)
    {
        if (x == 0)
            printf("The number %d is neither even nor odd", x);
        else if (x%2 == 0)   
            printf("The number %d is even", x);
        else 
            printf("The number %d is odd", x);
    }

void main()
    {
        unsigned int n, res;
        printf("CHECKING FOR EVEN AND ODD NUMBERS");
        printf("\n\nEnter a number : ");
        scanf("%d", &n);

        check_even_odd(n);

    }