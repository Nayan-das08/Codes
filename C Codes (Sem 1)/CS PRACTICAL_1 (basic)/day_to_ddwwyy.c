//Convert no of days to Years:Weeks:Days

#include <stdio.h>

void main()
  {
    int days, yy, ww, dd, temp;
    printf("DAYS TO YEARS:WEEKS:DAYS CONVERSION");
    printf("\n\nEnter the no. of days to be converted : ");
    scanf("%d", &days);

    temp = days;
    yy = days/365;
    days = days % 365;
    ww = days/7;
    days = days % 7;
    dd = days;
    days = temp;

    printf("\nAfter conversion, %d days is :-", days);
    printf("\nYears : %d", yy);
    printf("\nWeeks : %d", ww);
    printf("\nDays  : %d", dd);
  }