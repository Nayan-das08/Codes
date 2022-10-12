//To calculate the average weight of items

# include <stdio.h>

void main()
    {
        float A_wt, B_wt, A_avg, B_avg;
        int A_items, B_items;
        printf("AVERAGE WEIGHT OF ITEMS");
        printf("\n\nEnter total weight of item A (kg) : ");
        scanf("%f", &A_wt);
        printf("Enter total weight of item B (kg) : ");
        scanf("%f", &B_wt);
        printf("\nEnter no. of purchases of item A : ");
        scanf("%d", &A_items);
        printf("Enter no. of purchases of item B : ");
        scanf("%d", &B_items);

        A_avg = A_wt/A_items;
        B_avg = B_wt/B_items;

        printf("\nThe average weight of item A and B respectively are %0.2f and %0.2f", A_avg, B_avg);
    }