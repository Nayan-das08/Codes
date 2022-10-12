//Swapping using a third variable

#include <stdio.h>

void main()
    {
        int a, b, temp;
        printf("\nSWAP WITH A THIRD VARIABLE");
        printf("\n\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);
        temp = a;
        a = b; 
        b = temp;
        printf("\nAfter swapping,");
        printf("\na = %d", a);
        printf("\nb = %d\n", b);
    }