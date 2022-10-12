//Swapping without using a third variable

#include <stdio.h>

void main()
    {
        int a, b;
        printf("\nSWAP WITHOUT A THIRD VARIABLE");
        printf("\n\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("\nAfter swapping,");
        printf("\na = %d", a);
        printf("\nb = %d\n", b);
    }