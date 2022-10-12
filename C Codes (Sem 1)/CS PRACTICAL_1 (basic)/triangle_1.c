//Check if triangle is equilateral, isosceles or scalene

# include <stdio.h>
# include <conio.h>

void main()
    {
        float a, b, c;
        printf("CLASSIFICATION OF TRIANGLE ON THE BASIS OF SIDES");
        printf("\n\nEnter first side  : ");
        scanf("%f", &a);
        printf("Enter second side : ");
        scanf("%f", &b);
        printf("Enter third side  : ");
        scanf("%f", &c);

        if (a+b<c || b+c<a || a+c<b)
            printf("\nThe triangle is invlaid");
        else
            {
	            if (a==b && b==c)
	                printf("\nThe triangle is equilateral");
	            else if (a==b || b==c || a==c)
	                printf("\nThe triangle is isosceles");
	            else
	                printf("\nThe triangle is scalene");
            }
  }