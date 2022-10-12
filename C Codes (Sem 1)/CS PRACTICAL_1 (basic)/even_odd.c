//To check whether a number is even or odd

#include <stdio.h>

void main()
    {
        int num;
        printf("CHECKING FOR EVEN/ODD NUMBERS");
        printf("\n\nEnter a number : ");
        scanf("%d", &num);

        if (num == 0)
            printf("\nThe number is zero");
        else if (num % 2 == 0)
            printf("\nThe number %d is even", num);
        else
        {
            printf("\nThe number %d is odd", num);
        }
        
    }