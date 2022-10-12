//To find the smallest of two numbers

#include <stdio.h>

void main()
    {
        int a, b;
        printf("FINDING SMALLEST OF TWO NUMBERS");
        printf("\n\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);

        if (a > b)
            printf("\n%d is the smallest number of %d and %d", b, a, b);
        else if (a < b)
            printf("\n%d is the smallest number of %d and %d", a, a, b);
        else
            printf("\nBoth the nmbers are equal");
        
    }