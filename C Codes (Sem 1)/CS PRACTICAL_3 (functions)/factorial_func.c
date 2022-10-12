//Calculate factorial of a number using the concept of function

# include <stdio.h>

double factorial(int x)
    {
        int i;
        double res=1; 
        for (i=x; i>0; i--)
            res = res * i;
        return res;      
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