//Check whether a no. is even or odd

#include <stdio.h>
#include <conio.h>

void main()
  {
    clrscr();
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num == 0)
      printf("The number is 0, neither odd nor even");
    else if (num%2 == 0)
      printf("\nThe number %d is even", num);
    else
      printf("\nThe number %d is odd", num);
    getch();
  }