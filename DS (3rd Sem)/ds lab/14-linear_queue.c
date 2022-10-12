// Linear queue implemented using arrays

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# define max 5

int front=-1, rear=-1, queue[max];

int seek()
{
  return queue[front];
}

int isfull()
{
  if (rear == max-1)
    return 1;   //full
  else
    return 0;
}

int isempty()
{
  if (front == -1 || front > rear)
    return 1;   //empty
  else
    return 0;
}

void enqueue()
{
  int n;
  printf("\nENQUEUE");
  if (isfull() == 1)
    printf("\nOVERFLOW");
  else
  {
    printf("\nEnter the number : ");
    scanf("%d", &n);
    if (front == -1 || rear == -1) // first value inserted
    {
      rear++;
      front++;     // for front = -1 initialization
    }
    else                          // not the first value
      rear++;
    queue[rear] = n;
  } 
}

void dequeue()
{
  printf("\nDEQUEUE");
  if (isempty() == 1)
    printf("\nUNDERFLOW");
  else
  {
    printf("\n%d is deleted\n", queue[front]);
    front++;
  }
}

void display()
{
  int i;
  printf("\nQueue : ");

  if (isempty() == 1)
    printf("(empty)");
  else
  {  
    for (i=front; i<=rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}

int main()
{
  int choice;

  printf("\nLINEAR QUEUE IMPLEMENTED USING ARRAY\n");
  do
  {
    printf("\nPress 1 to enqueue\n");
    printf("Press 2 to dequeue\n");
    printf("Press 3 to display\n");
    printf("Press 4 to exit\n");
    printf("\nEnter the choice : ");
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
        display();
        break;

      case 4:
        exit(0);
        break;

      default : 
        printf("\nINVALID CHOICE CHOSEN!");
    }
    printf("\n--------------------------\n");
  }
  while(choice != 4);
  getch();
  return 0;
}