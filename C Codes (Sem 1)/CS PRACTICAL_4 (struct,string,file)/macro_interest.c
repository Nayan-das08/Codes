//Calculate Simple Interest by adding macro
//definition to a header file "interest.h"

# include <stdio.h>
# include "interest.h"

void main()
    {
        float p, r, t;

        printf("SIMPLE INTEREST CALCULATOR USING THE HEADER FILE 'INTEREST.H'");
        printf("\n\nEnter the principle amount : ");
        scanf("%f", &p);
        printf("Enter the rate of interest : ");
        scanf("%f", &r);
        printf("Enter the time period (in term of year) : ");
        scanf("%f", &t);

        printf("\nThe Simple Interest on the principle amount = %0.2f", SI(p,r,t));
        printf("\nThe Total Amount to be paid = %0.2f", AMT(p,r,t));

    }