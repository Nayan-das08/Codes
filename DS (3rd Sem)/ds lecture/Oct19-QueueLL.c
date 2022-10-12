// queue using linked list implementation

# include <stdio.h>
# include <stdlib.h>
# define null NULL

struct node
{
  int data;
  struct node *next;
};

struct node *front, *rear, *new, *temp, *temp2;

void display()
{
  printf("Queue :  ");
  if (front == null)
    printf("(empty)");
  else
  {
    temp = front;
    while (temp != null)
    {
      printf("%d  ", temp->data);
      temp = temp->next;
    }
  }
}

void enqueue()
{
  int val;
  printf("\nENQUEUE OPERATION");
  printf("\nEnter value : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = null;

  if (front == null)    // no node in list
  {
    rear = new;
    front = new;
  }
  else
  {
    rear->next = new;
    rear = new;
  }
  //printf("\n%d pushed successfully");
  display();
}

void dequeue()
{
  if (front == null)
    printf("\nUNDERFLOW");
  else
  {
    if (front == rear)   // only one node present
    {
      temp = front;
      front = rear = null;
      free(temp);
    }
    else
    {
      temp = front;
      front = front->next;
      free(temp);
    }
    display();
  }
}

int main()
{
  int choice;
  do
  {
    printf("\nPress 1 for Enqueue");
    printf("\nPress 2 for Dequeue");
    printf("\nPress 3 for exit");

    printf("\n\nEnter choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      enqueue();
      break;
    
    case 2:
      dequeue();
      break;
    
    case 3:
      printf("\nExiting from program...");
      printf("\n------------------------------------------\n");
      exit(0);
      break;
    
    default:
      printf("\nINVALID INPUT");
      break;
    }
    printf("\n\ncontinue ? (1 fro yes, 0 for no) : ");
    scanf("%d", &choice);
    printf("\n------------------------------------------\n");
  } while (choice != 0);
  
}