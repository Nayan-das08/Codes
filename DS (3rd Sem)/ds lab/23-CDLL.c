// Circular doubly linked list

# include <stdio.h>
# include <stdlib.h>
# define null NULL

struct node 
{
  int data;
  struct node *prev, *next;
};

struct node *temp, *new, *temp2, *start=null, *temp3;

void display()
{
  printf("List :  ");
  if (start == NULL)
    printf("(empty)");
  else
  {
    temp = start;
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
    printf("\n\nEnter the data : ");
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    new->data = n;
    new->next = NULL;
    new->prev = NULL;
    
    if (start == NULL)
    {
      start = new;
      new->next = start;
      new->prev = start;
    }
    else
    {
      temp = start->prev;   // takes temp to last element
      //                       if no only one element, temp remains at start
      temp->next = new;
      new->prev = temp;
      new->next = start;
      start->prev = new;
    }
    display();
    printf("\n\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
  }
  while(ch != 0);
}

//-------------------

void insertStart()
{
  int val;
  printf("\n\tInsert at the beginning");
  printf("\n\tEnter the value to be inserted : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;

  if (start == null)
  {
    start = new;
    new->next = start;
    new->prev = start;
  }
  else
  {
    temp = start->prev;   // temp = last node
    temp->next = new;
    new->next = start;
    new->prev = temp;
    start->prev = new;
    start = new;
  }
  printf("\n\t%d inserted successfully", val);
  //display();
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

  if (start == null)
  {
    start = new;
    new->next = start;
    new->prev = start;
  }
  else
  {
    temp = start;
    for (int i=1; i<pos; i++)   // stops at i = pos
      temp = temp->next;
    
    temp2 = temp->prev;
    
    temp2->next = new;
    new->next = temp;
    new->prev = temp2;
    temp->prev = new;
  }
  printf("\n\t%d inserted successfully", val);
  //display();
}

void insertEnd()
{
  int val;
  printf("\n\tInsert at the end");
  printf("\n\tEnter the value to be inserted : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  
  if (start == null)
  {
    start = new;
    new->next = start;
    new->prev = start;
  }
  else
  {
    temp = start->prev;   // temp = last node
    temp->next = new;
    new->next = start;
    new->prev = temp;
    start->prev = new;
  }
  printf("\n\t%d inserted successfully", val);
  //display();
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

//--------------------

void deleteStart()
{
  printf("\n\tDeletion from the beginning");
  if (start == null)
    printf("\n\tUNDERFLOW");
  else
  {
    if (start->next == start)  // only one node in list
    {
      temp = start;
      start = null;
    }
      
    else
    {
      temp = start;           // to be deleted
      temp2 = start->prev;    // temp2 = last node 
      
      temp2->next = start->next;
      (start->next)->prev = temp2;
      start = start->next;
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
  
    if (start->data == val)   // if first node is val
    {
      if (start->next == start)   // only one node is present
      {
        temp = start;
        start = null;
      }
      else
      {
        temp = start;   // to be deleted
        temp2 = start->prev;    // last node

        start = start->next;
        start->prev = temp2;
        temp2->next = start;
      }
    }
    else
    {
      temp = start;
      while (temp->data != val)
        temp = temp->next;
      temp2 = temp->prev;
      temp3 = temp->next;

      temp2->next = temp3;
      temp3->prev = temp2;
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
    if (start->next == start)  // only one node in list
    {
      temp = start;
      start = null;
    }
    
    else
    {
      temp = start->prev;     // to be deleted
      temp2 = temp->prev;     // temp2 = 2nd last node
      
      temp2->next = start;
      start->prev = temp2;
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

  printf("\nCIRCULAR DOUBLY LINKED LIST\n");
  
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

