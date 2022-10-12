//Calculate factorial of entered number

# include <stdio.h>

void main()
    {
        int a, i;
        double fact = 1;
        printf("FACTORIAL CALCULATOR");
        printf("\n\nEnter a number : ");
        scanf("%d", &a);
        
        if (a == 0)                    // factorial of 0
            printf("0! = %0.0lf", fact);  // fact is initialized with 1
        else
            {
                for (i=a; i>0; i--)
                    fact = fact * i;
                printf("%d! = %0.0lf", a, fact);
            }
    }