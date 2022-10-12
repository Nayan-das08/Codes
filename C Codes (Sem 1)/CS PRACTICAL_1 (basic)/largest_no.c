//To find the largest of two numbers

#include <stdio.h>

void main()
    {
        int a, b, c;
        printf("FINDING SMALLEST OF TWO NUMBERS");
        printf("\n\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);
        printf("Enter third number  : ");
        scanf("%d", &c);

        if (a >= b && a >= c)         // a is largest
            printf("\n%d is the largest number of %d, %d and %d", a, a, b, c);
        else if (b >= a && b >= c)    // b is largest
            printf("\n%d is the largest number of %d, %d and %d", b, a, b, c);
        else if (c >= a && c >= b)    // c is largest
            printf("\n%d is the largest number of %d, %d and %d", c, a, b, c);
        // '>=' takes care of both greater as well as equal values
    }