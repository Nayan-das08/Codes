//Program for calculating the library fine

# include <stdio.h>
void main()
    {
        unsigned int days;
        float fine;
        printf("LIBRARY FINE CALCULATOR");
        printf("\n\nEnter the no. of days : ");
        scanf("%d", &days);

        if (days < 5)
            fine = 0.5*days;
        else if (days >=6 && days <=10)
            fine = (0.5*5) + (1*(days-5));
        else if (days > 10 && days <=30)
            fine = (0.5*5) + (1*5) + (5*(days-10));
        else
            fine = (0.5*5) + (1*5) + (5*(days-10));
                
        if (fine >= 107.5)
            {
                printf("\nWe are sorry to inform you that your library membership has been cancelled.");
                printf("\nTo renew the same, contact the authorities.");
            }

        printf("\nFine amount = %0.2f Rupees", fine);
    }