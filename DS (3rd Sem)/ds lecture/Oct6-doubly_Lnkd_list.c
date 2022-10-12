// doubly linked list

# include <stdio.h>
# include <stdlib.h>

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

void insertStart(int n)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion at the beginning\n");
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
  
  display();
}

void insertBefore(int n)
{
  int val;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion BEFORE given node\n");
  if (start == NULL)            // if no node is present in list
  {
    start = new;
    new->next = NULL;
    new->prev = NULL;
  }
  else
  {
    printf("\nEnter value BEFORE which new node is to be inserted : ");
    scanf("%d", &val);
    
    temp = start;               
    while (temp->data != val)   // stops when temp has data == val
      temp = temp->next;

    temp2 = temp->prev;         // temp2 = prev node of temp
    temp2->next = new;          // temp2 points fwd to new
    new->next = temp;           // new node points fwd to temp
    temp->prev = new;           // temp points back to new node
    new->prev = temp2;          // new node points back to temp2
  }
  display();
}

void insertAfter(int n)
{
  int val;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = n;

  printf("\n\nInsertion AFTER given node\n");
  if (start == NULL)            // if no node is present in list
  {
    start = new;
    new->next = NULL;
    new->prev = NULL;
  }
  else
  {
    printf("\nEnter value AFTER which new node is to be inserted : ");
    scanf("%d", &val);
    
    temp = start;               
    while(temp->data != val)    // stops when temp has data == val
      temp = temp->next;
    
    temp2 = temp->next;
    temp->next = new;
    new->next = temp2;
    temp2->prev = new;
    new->prev = temp;
  }
  display();
}

// make insertEnd()

void deleteStart()
{
  printf("\n\nDeletion from Start");
  temp = start;
  start = start->next;
  start->prev = NULL;

  printf("\n%d is deleted\n", temp->data);
  free(temp);
  display();
}

void deleteEnd()
{
  printf("\n\nDeletion from End");
  temp = start;
  
  while (temp->next != NULL)
    temp = temp->next;
  
  temp2 = temp->prev;
  temp2->next = NULL;

  printf("\n%d is deleted\n", temp->data);
  free(temp);
  display();
}

void deleteVal(int val)
{
  temp = start;

  while (temp->data != val)
    temp = temp->next;

  temp2 = temp->prev;
  temp3 = temp->next;

  temp2->next = temp3;
  temp3->prev = temp2;

  printf("\n%d is deleted\n", temp->data);
  free(temp);
  display();
}

int main()
{
  create();
  
  /*insertStart(50);
  insertBefore(60);
  insertAfter(70);
  */
  //deleteStart();
  //deleteEnd();
  deleteVal(30);
  return 0;
}
