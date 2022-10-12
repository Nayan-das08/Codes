# include <stdio.h>
# include <stdlib.h>
# define max 10

int queue[max];
int front1 = -1, rear1 = -1;
int front2 = max, rear2 = max;

void display()
{
  int i;
  printf("\nQueue 1 : ");

  if (front1 == -1 || front1 > rear1)
    printf("(empty)");
  else
  {  
    for (i=front1; i<=rear1; i++)
      printf("%d  ", queue[i]);
  }
  //------------------------------
  printf("\nQueue 2 : ");

  if (front2 == max || front2 < rear2)
    printf("(empty)");
  else
  {  
    for (i=front2; i>=rear2; i--)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}

void enqueue()
{
  int val, choice;
  printf("\nENQUEUE\n");
  if (rear2-rear1 == 1)   // overflow
    printf("\nOVERFLOW");
  else
  {
    printf("Enter the number : ");
    scanf("%d", &val);
    do
    {
      printf("Input %d in which queue (1 or 2) ? : ", val);
      scanf("%d", &choice);
      if (choice != 1 && choice != 2)
        printf("\nINVALID QUEUE NUMBER!\n");
    }
    while (choice != 1 && choice != 2);

    if (choice == 1)    // input in queue 1
    {
      if (front1 == -1 || rear1 == -1)    // no existing value in queue
      {
        rear1++;
        front1++;
      }
      else
        rear1++;
      queue[rear1] = val;
    }
    else                // input in queue 2
    {
      if (front2 == max || rear2 == max)    // no existing value in queue
      {
        rear2--;
        front2--;
      }
      else
        rear2--;
      queue[rear2] = val;
    }
  }
}

void dequeue()
{
  int choice;
  printf("\nDEQUEUE\n");
  
  if (front1 == -1 || front1 > rear1)
    printf("\nUNDERFLOW");
  else
  {
    do
    {
      printf("Delete from which queue (1 or 2) ? : ");
      scanf("%d", &choice);
      if (choice != 1 && choice != 2)
        printf("\nINVALID QUEUE NUMBER!\n");
    }
    while (choice != 1 && choice != 2);

    if (choice == 1)    // delete from queue 1
    {
      printf("\n%d is deleted\n", queue[front1]);
      front1++;
    }
    else                // delete from queue 2
    {
      printf("\n%d is deleted\n", queue[front2]);
      front2--;
    }
  }
}

int main()
{
  int choice;

  printf("\nMULTIPLE QUEUE IMPLEMENTED USING ARRAY\n");
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