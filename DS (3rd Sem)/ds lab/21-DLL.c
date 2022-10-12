// Double ended linked list

# include <stdio.h>
# include <stdlib.h>
# define null NULL

struct node
{
  int data;
  struct node *prev, *next;
};

struct node *start, *temp, *temp2, *temp3, *new;

void display()
{
  temp = start;
  printf("List :  ");
  if (start == NULL)
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
  int ch;
  int n;
  do
  {
    printf("\n\nEnter data : ");
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node)); 

    new->data = n;
    //new->next = NULL;     
    //new->prev = NULL;       // assgined later

    if (start == NULL)        // if no node is present in list
    {
      start = new;            // new node is the start
      new->next = NULL;       // new node points to NULL on both sides
      new->prev = NULL;
    }
    else                      // nodes are present in the list
    {
      temp = start;
      while(temp->next != NULL)   // stops at last node i.e.
        temp = temp->next;        // when temp->next = null
      temp->next = new;           // last node points to new node
      new->next = NULL;           // new node points fwd to NULL
      new->prev = temp;           // new node points back to last node
    }
    display();
    printf("\n\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
  }
  while(ch != 0);
}

//-------------------------------

void insertStart()
{
  int val;
  printf("\n\tInsertion at the beginning");
  printf("\n\tEnter the value to be entered : ");
  scanf("%d", &val);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;

  if (start == NULL)        // if no node is present in list
  {
    start = new;
    new->next = NULL;
    new->prev = NULL;
  }
  else                      
  {
    new->next = start;      // new node points fwd to start    
    new->prev = NULL;       // new node points back to NULL
    start->prev = new;      // start points back to new node
    start = new;            // new node is the new start
  }  
  printf("\n\t%d inserted successfully", val);
  //display();
}

void insertMid()
{
  int val, pos;
  printf("\n\tInsertion at the middle");
  printf("\n\tEnter the value to be entered  : ");
  scanf("%d", &val);
  printf("\tEnter the position is the list : ");
  scanf("%d", &pos);

  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;
  
  if (start == NULL)      // empty list
  {
    start = new;          // start points to new node  =>  new node becomes the first node
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
    temp2->prev = new;
    new->prev = temp;
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
  }
  else 
  {
    temp = start;
    while (temp->next != null)
      temp = temp->next;
    temp->next = new;
    new->prev = temp;
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
    printf("\n\tINVALID CHOICE CHOSEN!");
  }
}

//-------------------------------

void deleteStart()
{
  printf("\n\tDeletion from the beginning"); 
  if (start == NULL)
    printf("\n\tUNDERFLOW");
  else
  {
    temp = start;
    start = start->next;
    start->prev = NULL;
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
    {
      start = start->next;      
    }

    else
    {
      
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

void deletetEnd()
{
  printf("\n\tDeletion from the middle"); 
  if (start == NULL)
    printf("\n\tUNDERFLOW");
  else
  {
    temp = start;
  
    while (temp->next != NULL)
      temp = temp->next;
    
    temp2 = temp->prev;
    temp2->next = NULL;

    printf("\n\t%d is deleted", temp->data);
    free(temp);
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
    printf("\n\tINVALID CHOICE CHOSEN!");
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
  while(choice != 0);
  return 0;
}
