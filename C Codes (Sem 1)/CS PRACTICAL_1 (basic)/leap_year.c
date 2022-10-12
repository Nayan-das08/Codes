//To check for leap year

#include <stdio.h>
#include <conio.h>

void main()
  {
    int year;
    printf("CHECKING FOR LEAP YEAR");
    printf("\n\nEnter the year : ");
    scanf("%d", &year);

    if (year % 100 == 0 && year % 400 != 0)   //Cent. year not divisible by 400
      printf("The year %d is not a leap year", year);

    else if (year % 4 == 0)                 //Year divisible by 4
      printf("The year %d is a leap year", year);

    else                                  //Year not divisible by 4
      printf("The year %d is not a leap year", year);
  }