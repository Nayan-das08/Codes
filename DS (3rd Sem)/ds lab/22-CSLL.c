// Circular Singly Linked List

# include <stdio.h>
# include <stdlib.h>
# define null NULL
struct node
{
  int data;
  struct node *next;
};

struct node *start, *temp, *new, *temp2;

void display()
{
  temp = start;
  printf("List :  ");
  if (start == NULL)
    printf("(empty)");
  else
  {
    do
    {
      printf("%d -> ", temp->data);
      temp = temp->next;
    }while (temp != start);
    printf("(first node)");
  }
}

void create()
{
  int n, ch;
  do
  {
    printf("\n\nEnter data : ");
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    new->data = n;
    new->next = null;

    if (start == null)
    {
      start = new;
      new->next = start;
    }
    else
    {
      temp = start;
      while (temp->next != start)       // if only one element is present
        temp = temp->next;              // temp = start, then temp->next = start
      //                                   and the loop gets skipped
      new->next = start;
      temp->next = new;
    }
    display();
    printf("\n\ncontinue ? (1 for yes, 0 for no) : ");
    scanf("%d", &ch);
  } while (ch != 0);
}

//-----------------------

void insertStart()
{
  int val;
  printf("\n\tInsert at the beginning");
  printf("\n\tEnter the value to be inserted : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;

  if (start ==  null)
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    while (temp->next != start)
      temp = temp->next;
    new->next = start;
    temp->next = new;
    start = new;
  }
  //display();
  printf("\n\t%d inserted successfully", val);
}

void insertMid()
{
  int val, pos;
  printf("\n\tInsert at the middle");
  printf("\n\tEnter the value to be inserted : ");
  scanf("%d", &val);
  printf("\tEnter the position in the list : ");
  scanf("%d", &pos);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;

  if (start ==  null)
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    for (int i=1; i<pos-1; i++)
      temp = temp->next;
    //printf("\ntemp = %d", temp->data);
    temp2 = temp->next;
    temp->next = new;
    new->next = temp2;
  }
  //display();
  printf("\n\t%d inserted successfully", val);
}

void insertEnd()
{
  int val;
  printf("\n\tInsert at the end");
  printf("\n\tEnter the value to be inserted : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;

  if (start ==  null)
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    while (temp->next != start)
      temp = temp->next;
    new->next = start;
    temp->next = new;
  }
  //display();
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

//-----------------------

void deleteStart()
{
  printf("\n\tDeletion from the beginning");
  if (start == null)
    printf("\n\tUNDERFLOW");
  else
  {
    if (start->next == start)   // only one node is present in list 
      {
        temp = start;
        start = null;
      }
    else
    {
      temp2 = start;
      while (temp2->next != start)   // takes temp2 to the last node
        temp2 = temp2->next;
      temp = start;
      start = start->next;
      temp2->next = start;
    }
    printf("\n\t%d is deleted", temp->data);
    free(temp);
    //display();
  }
}

void deleteMid()
{
  int val;
  printf("\n\tDeletion from the middle");
  if (start == null)
    printf("\n\tUNDERFLOW");
  else
  {
    printf("\n\tEnter the value to be deleted : ");
    scanf("%d", &val);
  
    if (start->data == val)    // first node is val
    {
      if (start->next == start)   // only one node is present
      {
        temp = start;
        start = null;
      }
      else
      {
        temp = temp2 = start;
        // temp is to be deleted
        while (temp2->next != start)
          temp2 = temp2->next;    // takes temp2 to the last node
        start = start->next;
        temp2->next = start;
      }
    }
    else
    {
      temp = start;
      while (temp->data != val)
      {
        temp2 = temp;
        temp = temp->next;
      }
      temp2->next = temp->next;
    }
    printf("\n\t%d is deleted", temp->data);
    free(temp);
    //display();
  }
}

void deleteEnd()
{
  printf("\n\tDeletion from the middle");
  if (start == null)
    printf("\n\tUNDERFLOW");
  else
  {
    if (start->next == start)
    {
      temp = start;
      start = null;
    }
    else
    {
      temp = start;
      while (temp->next != start)
      {
        temp2 = temp;
        temp = temp->next;
      }
      temp2->next = start;
    }
    printf("\n\t%d is deleted", temp->data);
    free(temp);
    //display();
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
    deleteEnd();
    break;
  
  default:
    break;
  }
}


int main()
{
  int choice;

  printf("\nCIRCULAR SINGLY LINKED LIST\n");
  
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
  while(choice != 0);
  return 0;
}

