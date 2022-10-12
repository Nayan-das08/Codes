//Sum of all even or odd numbers in given range using recursion

# include <stdio.h>

int sum;

void even_odd_sum(int a, int b)
    {
        if (a > b)
            return;
        sum += a;
        even_odd_sum(a+2,b);
    }


void main()
    {
        int a, b, choice;
        printf("SUM OF EVEN OR ODD NUMBERS IN A RANGE");
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
                case 1: if (a%2 == 0)
                            even_odd_sum(a,b);
                        else 
                            even_odd_sum(a+1,b);
                        printf("The sum of even numbers from %d to %d = %d", a, b, sum);
                        break;
                case 2: if (a%2 != 0)
                            even_odd_sum(a,b);
                        else 
                            even_odd_sum(a+1,b);
                        printf("The sum of odd numbers from %d to %d = %d", a, b, sum);
                        break;
                default : printf("invalid choice entered");
            }
    }