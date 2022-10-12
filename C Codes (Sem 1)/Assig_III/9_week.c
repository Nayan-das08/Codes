//Input week number and print weekday

# include <stdio.h>

void main()
    {
        int n;
        printf("Enter weekday number : ");
        scanf("%d", &n);
        if (n > 7 || n < 1)
            printf("Invalid Number entered for a weekday!");
        else if (n == 1)
            printf("The day is Monday");
        else if (n == 2)
            printf("The day is Tuesday");
        else if (n == 3)
            printf("The day is Wednesday");
        else if (n == 4)
            printf("The day is Thursday");
        else if (n == 5)
            printf("The day is Friday");
        else if (n == 6)
            printf("The day is Saturday");
        else if (n == 7)
            printf("The day is Sunday");
    }