//Print all even or odd numbers in given range using recursion

# include <stdio.h>

void even_odd_no(int a, int b)
    {
        if (a > b)
            return;
        printf("%d ", a);
        even_odd_no(a+2,b);
    }

void main()
    {
        int a, b, choice;
        printf("EVEN OR ODD NUMBERS IN A RANGE");
        printf("\n\nEnter the opening limit : ");
        scanf("%d", &a);
        printf("Enter the closing limit : ");
        scanf("%d", &b);
        printf("\nPress 1 to display all even numbers in the range");
        printf("\nPress 2 to display all odd numbers in the range");
        printf("\n\nEnter the choice : ");
        scanf("%d", &choice);
        switch (choice)
            {
                case 1: printf("\nEven No. from %d to %d :-\n", a, b);
                        if (a%2 == 0)
                            even_odd_no(a,b);
                        else 
                            even_odd_no(a+1,b);
                        break;
                case 2: printf("\nOdd No. from %d to %d :-\n", a, b);
                        if (a%2 != 0)
                            even_odd_no(a,b);
                        else 
                            even_odd_no(a+1,b);
                        break;
                default : printf("invalid choice entered");
            }

    }