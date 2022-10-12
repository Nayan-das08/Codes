// stack of names

# include <stdio.h>
# include <string.h>
# define max 10

char stack[max][30], name[30];
int top=-1;

void display()
{
  int i;
  printf("\nStack :-\n");
  if (top == -1)
    printf("(empty)");
  else
    for (i=0; i<=top; i++)
      printf("  %s", stack[i]);
}

void push()
{
  char buffer;
  if (top == max-1)
    printf("\n\nOVERFLOW");
  else
  {
    printf("\nEnter name : ");
    scanf("%c", &buffer);
    gets(name);
    top++;
    strcpy(stack[top], name);
    printf("Pushed successfully");
  }
}

void pop()
{
  if (top == -1)
    printf("\n\nUNDERFLOW");
  else
  {
    printf("\nPopped successfully");
    top--;
  }
}

int main()
{
  int n, choice;
  printf("STACK CONTAINING NAMES\n");

  do
  {
    printf("\nPress 1 to push");
    printf("\nPress 2 to pop");
    printf("\nPress 3 to display");
    printf("\n\n  Enter your choice : ");
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
      display();
      break;

    default:
      printf("\n\nINVALID CHOICE ENTERED");
    }
    printf("\n\nDo your wish to continue (1 for yes, 0 for no) ? : ");
    scanf("%d", &choice);
  }
  while(choice != 0);

  return 0;
}
