// implementation of two-stack array

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# define max 7

int stack[max]={0};
int topA=-1;
int topB=max;

void display(int n) 
{
  int i;
  if (n == 1)
  {
    printf("\nstack A :  ");
    for (i=0; i<=topA; i++)
      printf("%d\t", stack[i]);
  }
  else if (n == 2)
  {
    printf("\nstack B :  ");
    for (i=max-1; i>=topB; i--)
      printf("%d\t", stack[i]);
  }
}

void pushA() 
{
  int n;
  printf("\nPUSH in stack A");
  if (topB-topA == 1)
    printf("\nSTACK OVERFLOW");
  else 
  {
    printf("\nEnter the number : ");
    scanf("%d", &n);
    topA++;
    stack[topA] = n;
  }
  display(1);
}

void pushB() 
{
  int n;
  printf("\nPUSH in stack B");
  if (topB-topA == 1)
    printf("\nSTACK OVERFLOW");
  else 
  {
    printf("\nEnter the number : ");
    scanf("%d", &n);
    topB--;
    stack[topB] = n;
  }
  display(2);
}

void popA()
{
  printf("\nPOP in stack A");
  if (topA == -1)
    printf("\nSTACK UNDERFLOW");
  else 
    topA--;
  printf("\n");
  display(1);
}

void popB()
{
  printf("\nPOP in stack B");
  if (topB == max)
    printf("\nSTACK UNDERFLOW");
  else
    topB++;
  printf("\n");
  display(2);
}

int main()
{
  int choice;

  printf("\nSTACK IMPLEMENTED USING ARRAY\n");
  do
  {
    printf("\nPress 1 to push in stack A\n");
    printf("Press 2 to push in stack B\n");
    printf("Press 3 to pop in stack A\n");
    printf("Press 4 to pop in stack B\n");
    printf("Press 5 to display\n");
    printf("Press 6 to exit\n");
    printf("\nEnter the choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
        pushA();
        break;

      case 2:
        pushB();
        break;
      
      case 3:
        popA();
        break;

      case 4:
        popB();
        break;

      case 5:
        printf("\n");
        display(1);
        display(2);
        break;

      case 6:
        exit(0);
        break;
      default : 
        printf("\nINVALID CHOICE CHOSEN!");
    }
    printf("\n\n--------------------------\n");
  }
  while(choice != 6);
  getch();
  return 0;
}