//Finding the quadrant of the co-ordinate

# include <stdio.h>

void main()
    {
        int quad;
        float x, y;
        printf("FINDING QUADRANT");
        printf("\n\nEnter the x co-ordinate : ");
        scanf("%f", &x);
        printf("Enter the y co-ordinate : ");
        scanf("%f", &y);
        
        if (x == 0 && y == 0)
            quad = 0;
        else 
            {
                if (x >= 0 && y >= 0)
                    printf("\nThe co-ordinate (%0.2f, %0.2f) lies in Quadrant I", x, y);
                else if (x <= 0 && y >= 0)
                    printf("\nThe co-ordinate (%0.2f, %0.2f) lies in Quadrant II", x, y);
                else if (x <= 0 && y <= 0)
                    printf("\nThe co-ordinate (%0.2f, %0.2f) lies in Quadrant III", x, y);
                else if (x >= 0 && y <= 0)
                    printf("\nThe co-ordinate (%0.2f, %0.2f) lies in Quadrant IV", x, y);
            }
    }