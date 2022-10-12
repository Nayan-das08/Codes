//Calculate factorial of a number using recusive function

# include <stdio.h>

double factorial(int x)
    {
        static double fact=1;
        if (x > 0)
            {
                fact *= x;
                return factorial(x-1);
            }
        else 
            return fact;
    }

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
                fact = factorial(a);
                printf("%d! = %0.0lf", a, fact);
            }
    }
