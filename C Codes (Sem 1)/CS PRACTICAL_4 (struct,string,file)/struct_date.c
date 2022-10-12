//Structure for Dates

# include <stdio.h>
# include <stdlib.h>

struct date
    {
        int day, month, year;
    };

void main()
    {
        struct date d1, d2;
        printf("COMPARISON OF TWO DATES");
        printf("\n\nFor date 1 :-\n");
        printf("\tEnter day   : ");
        scanf("%d", &d1.day);
        printf("\tEnter month : ");
        scanf("%d", &d1.month);
        printf("\tEnter year  : ");
        scanf("%d", &d1.year);

        printf("For date 2 :-\n");
        printf("\tEnter day   : ");
        scanf("%d", &d2.day);
        printf("\tEnter month : ");
        scanf("%d", &d2.month);
        printf("\tEnter year  : ");
        scanf("%d", &d2.year);
        
        if (d1.month >=12 || d2.month >= 12)
            {
                printf("\nThe dates are INVALID");
                exit(0);
            }

        if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
            printf("\nThe Date are equal");
        else
            printf("\nThe Dates are not equal");
    }