// Circular Linked List

# include <stdio.h>
# include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start, *new, *temp, *temp2;

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
    //new->next = NULL;     // assigned later

    if (start == NULL)      // first element
    {
      start = new;
      new->next = start;
    }
    else
    {
      temp = start;
      while (temp->next != start)   // stops when the last element is reached (last element's next points to start)
        temp = temp->next;
      new->next = start;
      temp->next = new;
    }
    display();
    printf("\n\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
  }
  while(ch != 0);
}

void insertStart(int n)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion at the beginning\n");
  if (start == NULL)      // first element in the list
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    while (temp->next != start)   // if there's only one element in the list
    //                               then loop gets skipped and still the fn 
    //                               works as temp (== start) is the last element
      temp = temp->next;
    
    temp->next = new;
    new->next = start;
    start = new;
  }
  display();
}

void insertMidPos(int n)
{
  int pos;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion at the middle\n");
  printf("\nEnter the position : ");
  scanf("%d", &pos);
  
  if (start == NULL)  // if no element is present
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    for (int i=1; i<pos; i++)    // stops at (pos)th node
    {
      temp2 = temp;
      temp = temp->next;
    }
    new->next = temp;
    temp2->next = new;
  }
  display();
}

void insertAfter(int n)
{
  int p;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion after a given node\n");
  printf("\nEnter the value after which insertion occurs : ");
  scanf("%d", &p);
  
  if (start == NULL)  // if no element is present
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    while (temp->data != p)   // stops at node having value p 
    {
      temp = temp->next;
    }
    //temp2 = temp->next;
    new->next = temp->next;
    temp->next = new;
  }
  display();
}

void insertBefore(int n)
{
  int p;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion before a given node");
  printf("\nEnter the value before which insertion occurs : ");
  scanf("%d", &p);

  if (start == NULL)
  {
    start = new;
    new->next = start;
  } 
  else
  {
    temp = start;
    while (temp->data != p)   // stops at node having value p
    {
      temp2 = temp;
      temp = temp->next;
    }
    // temp2 is node before temp and temp is node with value p
    new->next = temp;
    temp2->next = new;
  }
}

void insertEnd(int n)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;
  printf("\n\nInsertion at the end\n");
  if (start == NULL)
  {
    start = new;
    new->next = start;
  }
  else
  {
    temp = start;
    while(temp->next != start)
      temp = temp->next;
    new->next = start;
    temp->next = new;
  }
  display();
}

void deleteStart()
{
  printf("\n\nDeletion from Start");
  if (start == NULL)
    printf("\nUNDERFLOW\n");
  else
  {
    if (start->next == start)     // single node present in the list
      start = NULL;

    else
    { 
      temp = start;
      temp2 = start;        // will be deleted
      while (temp->next != start)     // temp goes to last position
        temp = temp->next;
      start = start->next;
      temp->next = start;
      printf("\n%d is deleted\n", temp2->data);
      free(temp2);
    }
    display();
  }
}

void deleteMidVal()
{
  int val;
  int found = 0;
  printf("\n\nDeletion from Middle");
  printf("\nEnter the value to be deleted : ");
  scanf("%d", &val);
  if (start == NULL)
    printf("\nUNDERFLOW\n");
  else
  {
    if (start->next == start)
      if (start->data == val)     // single node present in the list
        start = NULL;
      else
        printf("\nValue not found");
    
    else if (start->data == val)    // start is the node to be deleted
    {
      temp = start;
      temp2 = start;    //to be deleted
      while(temp->next != start)
        temp = temp->next;
      temp->next = start->next;
      start = start->next;
      free(temp2);
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
      free(temp);
    }
    display();
  }
}

void deleteEnd()
{
  printf("\n\nDeletion from End\n");
  if (start == NULL)
    printf("\nUNDERFLOW\n");
  else
  {
    if (start->next == start)   // single node present in the list
      start = NULL;
    
    else 
    {
      temp = start;
      while (temp->next != start)   // stops when temp reaches the last node
      {
        temp2 = temp;
        temp = temp->next;
      }
      temp2->next = start;
      free(temp);
    }
    display();
  }
}

int main()
{
  create();

  insertStart(40);
  insertMidPos(60);
  //insertAfter(100);
  //insertBefore(200);
  insertEnd(500);
  deleteStart();
  //deleteMidVal();

  deleteEnd();
  return 0;
}