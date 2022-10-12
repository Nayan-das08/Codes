// double ended queue
// input restricted

# include <stdio.h>
# include <stdlib.h>
# define max 10

int queue[max], front=-1, rear=-1;

void display()
{
  int i;
  printf("\nQueue : ");

  if (front == -1 || front > rear)
    printf("(empty)");
  else
  {
    for (i=front; i<=rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}

void enqueue()
{
  int val;

  printf("\nENQUEUE");
  if (rear == max-1)
    printf("\n\nOVERFLOW");
  else
  {
    printf("\nEnter the number : ");
    scanf("%d", &val);
    if (rear == -1 || front == -1)
    {
      front = 0;
      rear = 0;
    }
    else
      rear++;
    
    queue[rear] = val;
  }
}

void dequeFromFront()
{
  printf("\nDEQUEUE FROM FRONT");
  if (front == -1 || front > rear)
    printf("\n\nUNDERFLOW");
  else
  {
    printf("\n\n%d is deleted\n", queue[front]);
    front++;
  }
}

void dequeFromRear()
{
  printf("\nDEQUEUE FROM REAR");
  if (front == -1 || front > rear)
    printf("\n\nUNDERFLOW");
  else
  {
    printf("\n\n%d is deleted\n", queue[rear]);
    rear--;
  }
}

int main()
{
  int choice;

  printf("\nDOUBLE ENDED QUEUE IMPLEMENTED USING ARRAY\n");
  do
  {
    printf("\nPress 1 to enqueue\n");
    printf("Press 2 to dequeue from front\n");
    printf("Press 3 to dequeue from rear\n");
    printf("Press 4 to display\n");
    printf("Press 5 to exit\n");
    printf("\nEnter the choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
        enqueue();
        break;

      case 2:
        dequeFromFront();
        break;

      case 3:
        dequeFromRear();
        break;

      case 4:
        display();
        break;

      case 5:
        exit(0);
        break;

      default : 
        printf("\nINVALID CHOICE CHOSEN!");
    }
    printf("\n--------------------------\n");
  }
  while(choice != 5);
  return 0;
}