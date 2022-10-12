// Stack implemented using arrays

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# define size 10

//int const size = 10;
int top = -1;
int stack[size];
  
void display() 
{
  printf("Stack :");
  if (top == -1)
    printf("  (empty)");
  else
  {  
    for (int i=0; i<=top; i++) 
      printf("  %d", stack[i]);
    printf("\n");
  }
}

void push() 
{
  int n;
  printf("\nPUSH");
  if (top >= size-1)
    printf("\nSTACK OVERFLOW");
  else 
  {
    printf("\nEnter the number : ");
    scanf("%d", &n);
    top++;
    stack[top] = n;
  }
  display();
}

void pop() 
{
  printf("\nPOP");
  if (top == -1)
    printf("\nSTACK UNDERFLOW");
  else 
    top--;
  printf("\n");
  display();
}

int main()
{
  int choice;

  printf("\nSTACK IMPLEMENTED USING ARRAY");
  do
  {
    printf("\nPress 1 to push\n");
    printf("Press 2 to pop\n");
    printf("Press 3 to exit\n");
    printf("\nEnter the choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
        push();
        break;

      case 2:
        pop();
        break;
      
      case 3:
        printf("\n");
        display();
        exit(0);
        break;

      default : 
        printf("\nINVALID CHOICE CHOSEN!");
    }
    printf("\n--------------------------\n");
  }
  while(choice != 4);
  getch();
  return 0;
}