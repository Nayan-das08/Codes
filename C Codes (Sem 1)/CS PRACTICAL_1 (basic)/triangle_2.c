//Check if triangle is equilateral, isosceles or scalene

# include <stdio.h>
# include <conio.h>

void main()
    {
        float a, b, c;
        printf("CLASSIFICATION OF TRIANGLE ON THE BASIS OF ANGLES");
        printf("\n\nEnter first angle  : ");
        scanf("%f", &a);
        printf("Enter second angle : ");
        scanf("%f", &b);
        printf("Enter third angle  : ");
        scanf("%f", &c);

        if (a +b + c != 180)
            printf("\nThe triangle is invlaid");
        else
            {
	            if (a < 90 && b < 90 && c < 90)
	                printf("\nThe triangle is acute angled triangle");
	            else if (a == 90 || b == 90 || c == 90)
	                printf("\nThe triangle is right angled triangle");
	            else
	                printf("\nThe triangle is scalene");
            }
  }