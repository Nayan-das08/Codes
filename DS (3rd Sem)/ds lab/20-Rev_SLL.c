// reverse a singly linked list

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
    }
    display();
    printf("\n\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
  }
  while (ch != 0);
}

void reverse()
{
  int stack[30], top=-1;
  
  if (start == null)
    printf("\n\nThe List is empty");
  else
  {
    temp = start;
    while (temp != null)
    {
      stack[++top] = temp->data;
      temp = temp->next;
    } 

    temp = start; 
    while (top != -1)
    {
      temp->data = stack[top--];
      temp = temp->next;
    }
    printf("\n\nThe reversed Linked List is :-\n");
    display();
  }

}

int main()
{
  printf("REVERSING A LINKED LIST");
  create();
  reverse();

  return 0;
}
