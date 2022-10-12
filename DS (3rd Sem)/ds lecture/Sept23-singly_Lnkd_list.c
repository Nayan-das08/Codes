// creation and display of singly linked list

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start=NULL, *temp, *new, *current;

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
    }
    display();
    printf("\n\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
    //ch = getche();
  }
  while(ch != 0);
}

void insertFirst(int val)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;
  printf("\n\nInserting at first\n");
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
  display();
}

void insertMid(int val, int pos)
{
  int i;
  struct node *temp2;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;
  printf("\n\nInserting at position %d\n", pos);
  if (start == NULL)      // empty list
  {
    start = new;          // start points to new node  =>  new node becomes the first node      
    current = new;        // current points to new node  =>  new node becomes the new last node
  }
  else
  {
    temp = start;
    for (i=1; i<pos-1; i++)   // takes temp to (pos-1)th node
      temp = temp->next;
    
    //i<pos takes temp to (pos)th element         use this for insertion after pos
    //i<pos-1 takes temp to (pos-1)th element     use this for insertion at pos

    temp2 = temp->next;     // temp2 = node after temp  => the node at pos position
    temp->next = new;       // (pos-1)th node points to new node
    new->next = temp2;      // new node points to (pos)th node
  }
  display();
}

void insertEnd(int val)
{
  new = (struct node *)malloc(sizeof(struct node));
  new->data = val;
  new->next = NULL;
  
  printf("\n\nInserting at the end\n");
  
  if (start == NULL)        // empty list
  {
    start = new;            // start points to new node  =>  new node becomes the first node      
    current = new;          // current points to new node  =>  new node becomes the current
  }
  else
  {
    current->next = new;    // current points to new node  =>  last node points to new node
    current = new;          // new node becomes the new last node
  }
  display();
}

void deletePos(int pos)   //the case of node not found not done yet
{
  struct node *temp2;
  temp2 = start;

  printf("\n\nDeletion at position %d\n", pos);
  if (pos == 1)
  {
    start = start->next;
    temp->next = NULL;    //ask prof about this
  }
  else
  {
    for (int i=1; i<pos-1; i++)   //takes temp2 to (pos-1)th node 
      temp2 = temp2->next;
    temp = temp2->next;        // temp = node after temp2  =>  the node to be deleted
    temp2->next = temp->next;  // (pos-1)th node points to (pos+1)th node 
  }
  free(temp);
  display();
}

void deleteVal(int val)   //the case of node not found not done yet
{
  struct node *temp2;
  temp = start;

  printf("\n\nDeletion node having data value %d\n", val);
  if (val == start->data)
  {
    start = start->next;
    temp->next = NULL;    //ask prof about this
  }
  else
  {
    while (val != temp->data)   // takes temp to the node to be deleted
    {
      temp2 = temp;         // temp2 = node before temp
      temp = temp->next;
    }    
    temp2->next = temp->next;   // the node before temp points to node after temp
  }
  free(temp);
  display();
}

void deleteBeforeVal()
{
  struct node *temp2, *temp3;
  temp = temp2 = temp3 = start;

  int val;
  printf("\n\nEnter the data (the node before this will be deleted) : ");
  scanf("%d", &val);


  while (temp->data != val)
  {
    temp3 = temp2;
    temp2 = temp;
    temp = temp->next;
  }
  // for 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> null
  // temp3 = 30
  // temp2 = 40
  // temp = 50
  // 40 (temp2) is to be deleted

  temp3->next = temp;
  free(temp2); 
  display();
}

int main()
{
  create();
  //insertFirst(50);
  //insertMid(100, 3);    // at what position u want to insert
  //insertEnd(200);
  //deletePos(5);         // delete with the position of node
  deleteVal(40);        // delete with the value of node
  deleteBeforeVal(30);
  return 0; 
}