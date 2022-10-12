// Circular queue implemented using arrays

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# define max 4

int queue[max], front=-1, rear=-1;

void display()
{
  int i;
  printf("\n\nQueue : ");
  if (front <= rear)
    for (i=front; i<=rear; i++)
      printf("%d  ", queue[i]);
  else 
  {
    for (i=front; i<=max-1; i++)
      printf("%d  ", queue[i]);
    for (i=0; i<=rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}

void enqueue()
{
  printf("\nENQUEUE");
  int n;
  if ((front == 0 && rear == max-1) || (rear == front-1))
    printf("\n\nOVERFLOW");
  else
    {
      printf("\nEnter the number : ");
      scanf("%d", &n);
      if (front == -1 && rear == -1)          // no element in present in queue
      {
        front = 0;
        rear = 0;
      }
      else if (rear == max-1 && front != 0)   // rear is at the end of queue 
      //                                         but there is space available behind front
        rear = 0;
      else 
        rear++;
      queue[rear] = n;
    }
}

void dequeue()
{
  printf("\nDEQUEUE");
  if (front == -1)
    printf("\n\nUNDERFLOW");
  else 
  {
    printf("\n\n%d is deleted\n", queue[front]);
    if (front == rear)
    {
      front = -1;
      rear = -1;
    }
    else if (front == max-1)
      front = 0;
    else 
      front++;
  }
}

int main()
{
  int choice;

  printf("\nCIRCULAR QUEUE IMPLEMENTED USING ARRAY\n");
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
  return 0;
}