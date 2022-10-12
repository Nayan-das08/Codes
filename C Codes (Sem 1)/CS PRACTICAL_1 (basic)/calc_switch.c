//A simple Calculator

# include <stdio.h>

void main()
    {
        float a, b, c;
        int choice;
        printf("SIMPLE CALCULATOR");
        printf("\n\nPress 1 for Addition");
        printf("\nPress 2 for Subtraction");
        printf("\nPress 3 for Multiplication");
        printf("\nPress 4 for Division");
        printf("\nPress 5 for Remainder of Division");
        printf("\nPress any other no. for Exit");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);
        
        printf("\nEnter first number  : ");
        scanf("%f", &a);
        printf("Enter second number : ");
        scanf("%f", &b);

        switch(choice)
            {
                case 1 : printf("\nADDITION");
                         c = a + b;
                         printf("\nResult : %0.2f + %0.2f = %0.2f", a, b, c);
                         break;

                case 2 : printf("\nSUBTRACTION");
                         c = a - b;
                         printf("\nResult : %0.2f - %0.2f = %0.2f", a, b, c);
                         break;
                         
                case 3 : printf("\nMULTIPLICATION");
                         c = a * b;
                         printf("\nResult : %0.2f x %0.2f = %0.2f", a, b, c);
                         break;
                         
                case 4 : printf("\nDIVISION");
                         c = a / b;
                         printf("\nResult : %0.2f / %0.2f = %0.2f", a, b, c);
                         break;
                         
                case 5 : printf("\nREMAINDER");
                         c = (int)a % (int)b;
                         printf("\nResult : Remainder of %d / %d = %d", a, b, c);
                         break;
                         
                default : printf("\n\nThe desired operation is performed successfully");
            }
        
    }