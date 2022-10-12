//Swapping using concept of Functions

#include <stdio.h>

void swap(int x, int y)
    {
        int temp;

        printf("\nBefore swapping,");
        printf("\na = %d", x);
        printf("\nb = %d", y);
        
        temp = x;
        x = y;
        y = temp;

        printf("\n\nAfter swapping,");
        printf("\na = %d", x);
        printf("\nb = %d", y);
    }

void main()
    {
        int a, b, temp;
        printf("\nSWAP WITH A THIRD VARIABLE");
        printf("\n\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);

        swap(a,b);
    }