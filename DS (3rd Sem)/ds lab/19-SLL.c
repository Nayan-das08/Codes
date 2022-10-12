// Singly Linked List

# include <stdio.h>
# include <stdlib.h>
# define null NULL
struct node
{
  int data;
  struct node *next;
};

struct node *start=NULL, *temp, *temp2, *new, *current;

void display()
{
  temp = start;
  printf("List :  ");
  if (temp == NULL)
    printf("(empty)");
  else
  {
    while (temp != NULL)
    {
      printf("%d -> ", temp->data);
      temp = temp->next;
    }
    printf("NULL");
  }
}

void create()
{
  int n, ch;
  do
  {
    printf("\n\nEnter the data : ");
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    new->data = n;
    new->next = NULL;

    if (start == NULL)
    {
      start = new;
      current = new;
    }
    else
    {
      current->next = new;
      current = new;
    }// hello
    display();
    printf("\n\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
  }//
  while(ch != 0);
}

//-------------------------------

void insertStart()
{
  int val;
  printf("\n\tInsertion at the beginning");
  printf("\n\tEnter the value to be inserted : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;

  if (start == NULL)      // empty list
  {
    start = new;          // start points to new node  =>  new node becomes the first node
    current = new;        // current points to new node  =>  new node becomes the new last node
  }
  else
  {
    new->next = start;    // new node points to first node in list  =>  makes the first node second
    start = new;          // start points to new node  =>  new node becomes the first node
  }
  printf("\n\t%d inserted successfully", val);
}

void insertMid()
{
  int val, pos;
  printf("\n\tInsertion at the middle");
  printf("\n\tEnter the value to be entered  : ");
  scanf("%d", &val);
  printf("\tEnter the position in the list : ");
  scanf("%d", &pos);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;

  if (start == NULL)      // empty list
  {
    start = new;          // start points to new node  =>  new node becomes the first node
    current = new;        // current points to new node  =>  new node becomes the new last node
  }
  else
  {
    temp = start;
    for (int i=1; i<pos-1; i++)   // takes temp to (pos-1)th node
      temp = temp->next;

    //i<pos takes temp to (pos)th element         use this for insertion after pos
    //i<pos-1 takes temp to (pos-1)th element     use this for insertion at pos

    temp2 = temp->next;     // temp2 = node after temp  => the node at pos position
    temp->next = new;       // (pos-1)th node points to new node
    new->next = temp2;      // new node points to (pos)th node
  }
  printf("\n\t%d inserted successfully", val);
}

void insertEnd()
{
  int val;
  printf("\n\tInsertion at the end");
  printf("\n\tEnter the value to be entered : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;

  if (start == NULL)      // empty list
  {
    start = new;          // start points to new node  =>  new node becomes the first node
    current = new;        // current points to new node  =>  new node becomes the new last node
  }
  else
  {
    current->next = new;    // current points to new node  =>  last node points to new node
    current = new;          // new node becomes the new last node
  }
  printf("\n\t%d inserted successfully", val);
}

void ins()
{
  int choice;
  printf("\n    INSERTION\n");
  printf("\tPress 1 to insert at the beginning\n");
  printf("\tPress 2 to insert at the middle\n");
  printf("\tPress 3 to insert at the end\n");

  printf("\n\tEnter the choice : ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    insertStart();
    break;

  case 2:
    insertMid();
    break;

  case 3:
    insertEnd();
    break;

  default:
    break;
  }
}

//-------------------------------

void deleteStart()
{
  temp = start;
  printf("\n\tDeletion from the beginning");
  if (start == NULL)
    printf("\n\tUNDERFLOW");
  else
  {
    start = start->next;
    printf("\n\t%d is deleted", temp->data);
    free(temp);
  }
}

void deleteMid()
{
  printf("\n\tDeletion from the middle");
  if (start == NULL)
    printf("\n\tUNDERFLOW");

  else
  {
    int val;
    printf("\n\tEnter the value to be deleted : ");
    scanf("%d", &val);

    temp = start;

    if (start->data == val)
      start = start->next;
    else
    {
      while (temp->data != val)
      {
        temp2 = temp;
        temp = temp->next;
      }
      temp2->next = temp->next;
    }
    printf("\n\t%d is deleted", temp->data);
    free(temp);
  }
}

void deletetEnd()
{
  temp = start;

  if (start == NULL)
    printf("\n\tUNDERFLOW");
  else
  {
    temp = start;
    if (start->next == NULL)
    {
      start = NULL;
      printf("\n\t%d is deleted", temp->data);
      free(temp);
    }
    else
    {
      while (temp->next != NULL)
      {
        temp2 = temp;
        temp = temp->next;
      }
      temp2->next = null;
      printf("\n\t%d is deleted", temp->data);
      free(temp);
    }
  }
}

void del()
{
  int choice;
  printf("\n    DELETION\n");
  printf("\tPress 1 to delete from the beginning\n");
  printf("\tPress 2 to delete from the middle\n");
  printf("\tPress 3 to delete from the end\n");

  printf("\n\tEnter the choice : ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    deleteStart();
    break;

  case 2:
    deleteMid();
    break;

  case 3:
    deletetEnd();
    break;

  default:
    break;
  }
}


int main()
{
  int choice;

  printf("\nSINGLY LINKED LIST\n");

  printf("\nA linked list is created.\n");
  create();
  do
  {
    printf("\n\n--------------------------\n");
    printf("\nPress 1 to INSERT\n");
    printf("Press 2 to DELETE\n");
    printf("Press 3 to display\n");
    printf("Press 0 to exit\n");
    printf("\nEnter the choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
        ins();
        break;

      case 2:
        del();
        break;

      case 3:
        display();
        break;

      case 0:
        printf("\nExiting from program...");
        exit(0);
        break;

      default :
        printf("\nINVALID CHOICE CHOSEN!");
    }
    //printf("\n--------------------------\n");
  }
  while(choice != 4);
  return 0;
}
