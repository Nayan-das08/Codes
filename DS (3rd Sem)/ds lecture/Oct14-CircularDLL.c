// circular Doubly linked list

# include <stdio.h>
# include <stdlib.h>
# define null NULL

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *start, *temp, *new, *temp2, *temp3;

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

void insertStart(int n)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion at the beginning\n");
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
  display();
}

void insertEnd(int n)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion at the End\n");
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
  display();
}

void insertMid(int n)
{
  int pos;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion at the the given position\n");
  
  if (start == null)
  {
    start = new;
    new->next = start;
    new->prev = start;
  }
  else
  {
    printf("Enter position of new node : ");
    scanf("%d", &pos);
    temp = start;
    for (int i=1; i<pos; i++)   // stops at i = pos
      temp = temp->next;
    
    temp2 = temp->prev;
    
    temp2->next = new;
    new->next = temp;
    new->prev = temp2;
    temp->prev = new;
  }
  display();
}

void deleteStart()
{
  printf("\n\nDeletion from Start\n");
  if (start == null)
    printf("UNDERFLOW");
  else
  {
    if (start->next == start)  // only one node in list
      start = null;
    
    else
    {
      temp = start;           // to be deleted
      temp2 = start->prev;    // temp2 = last node 
      
      temp2->next = start->next;
      (start->next)->prev = temp2;
      start = start->next;
      
      printf("\n%d is deleted\n", temp->data);
      free(temp);
    }
    display();
  }
}

void deleteEnd()
{
  printf("\n\nDeletion from End\n");
  if (start == null)
    printf("UNDERFLOW");
  else
  {
    if (start->next == start)  // only one node in list
      start = null;
    
    else
    {
      temp = start->prev;   
      temp2 = temp->prev;    // temp2 = 2nd last node
      
      temp2->next = start;
      start->prev = temp2;

      printf("\n%d is deleted\n", temp->data);
      free(temp);
    }
    display();
  }
}

void deleteMid()
{
  int val;
  printf("\n\nDeletion from End\n");
  if (start == null)
    printf("UNDERFLOW");
  else
  {
    if (start->next == start)  // only one node in list
      start = null;
    
    else
    {
      printf("Enter the value to be deleted : ");
      scanf("%d", &val);
      
      if (start->data == val)
      {
        temp = start;           // to be deleted
        temp2 = start->prev;    // temp2 = last node
        start = start->next;

        start->prev = temp2;
        temp2->next = start;
      }
      else
      {
        temp = start;
        while (temp->data != val)   // stops when value at temp = val
          temp = temp->next;
        // temp = val
        temp2 = temp->prev;
        temp3 = temp->next;

        temp2->next = temp3;
        temp3->prev = temp2;

        printf("\n%d is deleted\n", temp->data);
      }
      free(temp);
    }
    display();
  }
}

int main()
{
  create();
  //insertStart(100);
  //insertEnd(200);
  //insertMid(300);
  //deleteStart();
  //deleteEnd();
  deleteMid();
  return 0;
}