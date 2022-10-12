//Calculating Electricity bill

# include <stdio.h>

void main()
    {
        float unit, bill;
        printf("ELECTRICITY BILL CALCULATOR");
        printf("\n\nEnter unit consumption : ");
        scanf("%f", &unit);

        if (unit <=199)
            bill = 1.2*unit;
        else if (unit >= 200 && unit <= 500)
            bill = (1.2*199) + (1.8*(unit-199));
        else
            bill = (1.2*199) + (1.8*301) + (2*(unit-500));
        
        if (bill > 400)
            bill = bill + (bill*0.15);
        
        if (bill < 100)
            bill = 100;
        
        printf("Your bill for %0.2f units is : %0.2f Rupees", unit, bill);
    }