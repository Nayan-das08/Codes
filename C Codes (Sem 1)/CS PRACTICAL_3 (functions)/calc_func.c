//A Simple Calculator using concept of Functions

# include <stdio.h>
# include <stdlib.h>

void add()
    {
        float a, b, c;
        printf("\nEnter first number  : ");
        scanf("%f", &a);
        printf("Enter second number : ");
        scanf("%f", &b);

        printf("\nADDITION");
        c = a + b;
        printf("\nResult : %0.2f + %0.2f = %0.2f", a, b, c);
    }

void subtract()
    {
        float a, b, c;
        printf("\nEnter first number  : ");
        scanf("%f", &a);
        printf("Enter second number : ");
        scanf("%f", &b);

        printf("\nSUBTRACTION");
        c = a - b;
        printf("\nResult : %0.2f - %0.2f = %0.2f", a, b, c);
    }

void multiply()
    {
        float a, b, c;
        printf("\nEnter first number  : ");
        scanf("%f", &a);
        printf("Enter second number : ");
        scanf("%f", &b);

        printf("\nMULTIPLICATION");
        c = a * b;
        printf("\nResult : %0.2f x %0.2f = %0.2f", a, b, c);
    }

void division ()
    {
        float a, b, c;
        printf("\nEnter first number  : ");
        scanf("%f", &a);
        printf("Enter second number : ");
        scanf("%f", &b);

        printf("\nDIVISION");
        c = a / b;
        printf("\nResult : %0.2f / %0.2f = %0.2f", a, b, c);
    }

void remainder_int()
    {
        int a, b, c;
        printf("\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);

        printf("\nREMAINDER");
        c = a % b;
        printf("\nResult : %d / %d = %d", a, b, c);
    }

void main()
    {
        float a, b;
        int choice;
        do
            {
            printf("\n\nSIMPLE CALCULATOR");
            printf("\n\nPress 1 for Addition");
            printf("\nPress 2 for Subtraction");
            printf("\nPress 3 for Multiplication");
            printf("\nPress 4 for Division");
            printf("\nPress 5 for Remainder of Division");
            printf("\nPress any other no. for Exit");
            printf("\nEnter Choice : ");
            scanf("%d", &choice);

            switch(choice)
                {
                    case 1 : add();
                             break;

                    case 2 : subtract();
                             break;
                         
                    case 3 : multiply();
                             break;
                         
                    case 4 : division();
                             break;
                         
                    case 5 : remainder_int();
                             break;
                         
                    default : printf("\nEXITED FROM PROGRAM SUCCESSFULLY");
                              exit(0);  
                }
            printf("\nDo you wish to continue (Press 1 for YES and any other number for NO) : ");
            scanf("%d", &choice);
            }
        while(choice == 1);
        printf("\nEXITED FROM PROGRAM SUCCESSFULLY");
    }