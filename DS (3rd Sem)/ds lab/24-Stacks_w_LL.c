// stacks using linked list implementation

# include <stdio.h>
# include <stdlib.h>
# define null NULL

struct node
{
  int data;
  struct node *next;
};

struct node *start, *top, *new, *temp, *temp2;

void display()
{
  printf("Stack :  ");
  if (start == null)
    printf("(empty)");
  else
  {
    temp = start;
    while (temp != null)
    {
      printf("%d  ", temp->data);
      temp = temp->next;
    }
  }
}

void push()
{
  int val;
  printf("\nPUSH OPERATION");
  printf("\nEnter value : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = null;

  if (start == null)
  {
    start = new;
    top = new;
  }
  else
  {
    top->next = new;
    top = new;
  }
  printf("\n%d pushed", val);
  //display();
}

void pop()
{
  if (start == null)
    printf("\nUNDERFLOW");
  else
  {
    if (start == top)   // only one node present
    {
      temp = start;
      start = top = null;
      printf("\n%d popped", temp->data);
      free(temp);
    }
    else
    {
      temp = start;
      temp2 = top;
      while (temp->next != top)   // stops when temp reaches 2nd last node, or node before top
        temp = temp->next;
      temp->next = null;
      top = temp;
      printf("\n%d popped", temp2->data);
      free(temp2);
    }
    
    //display();
  }
}

int main()
{
  int choice;
  printf("STACKS IMPLEMENTED USING LINKED LIST\n\n");
  do
  {
    printf("\nPress 1 for Push");
    printf("\nPress 2 for Pop");
    printf("\nPress 3 for Display");
    printf("\nPress 0 for exit");

    printf("\n\nEnter choice : ");
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
    
    case 0:
      printf("\nExiting from program...");
      exit(0);
      break;
    
    default:
      printf("\nINVALID INPUT");
      break;
    }
    printf("\n\ncontinue ? (1 for yes, 0 for no) : ");
    scanf("%d", &choice);
    printf("\n------------------------------------------\n");
  } while (choice != 0);
  
}