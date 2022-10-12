//Calculating roots of a quadratic equation

# include <stdio.h>
# include <math.h>

void main()
    {
        int a, b, c;
        float det, root1, root2;
        printf("ROOT CALCULATOR FOR A QUADRATIC EQUATION");
        printf("\n\nEnter the coeff. of x^2 : ");
        scanf("%d", &a);
        printf("Enter the coeff. of x   : ");
        scanf("%d", &b);
        printf("Enter the constant term : ");
        scanf("%d", &c);
        printf("\nThe equation is : (%d)x^2 + (%d)x + (%d)", a, b, c);
        det = sqrt((b*b)-(4*a*c));
        if (a == 0)
            printf("\nThe equation is not a quadratic equation");
        else
            {        
                if (det > 0)
                    {
                        root1 = (-b + det)/(2*a);
                        root2 = (-b - det)/(2*a);
                        printf("\nThe roots are %0.2f and %0.2f", root1, root2);
                    }
                else if (det == 0)
                    {
                        root1 = (float)-b/(2*a);    //typecasting required as RHS would
                                                    //only provide an int value to float  
                        printf("\nThe root is %0.2f", root1);
                    }
                else
                    printf("\nThe roots of the equation are imaginary");
            }
        printf("\n\nThe roots were successfully computed");
    }