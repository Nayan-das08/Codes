//To calculate simple interest

#include <stdio.h>

void main()
    {
        float p, r, t, si;
        printf("SIMPLE INTEREST CALCULATOR");
        printf("\nEnter the princlple amount : ");
        scanf("%f", &p);
        printf("Enter the rate of interest : ");
        scanf("%f", &r);
        printf("Enter the time period      : ");
        scanf("%f", &t);
        si = (p*r*t)/100;
        printf("\nThe simple interest calculated : %f", si);
    }