// priority queue

# include <stdio.h>
# define max 10
# include <stdlib.h>
int queue[max][2], front=-1, rear=-1;

void display()
{
  int i, j;
  printf("\nQueue :- ");
  printf("\n    +-----------------+");
  printf("\n    | data | priority |");
  printf("\n    +-----------------+\n");

  if (rear == -1)
    printf("    |      empty      |\n");
  else
  {
    for (i=front; i<=rear; i++)
    {
      printf("    |  %d  |", queue[i][0]);
      printf("    %d     |\n", queue[i][1]);
    }
  }
  printf("    +-----------------+\n");

}

void enqueue()
{
  printf("\nENQUEUE");
  int val, p;
  
  if (rear == max-1)      //queue is full
    printf("\n\nOVERFLOW");
  else
  {
    printf("\nEnter the number : ");
    scanf("%d", &val);
    printf("Enter priority rank : ");
    scanf("%d", &p);
    if (rear == -1 || front == -1)    //first element
    {
      front = 0;
      rear = 0;
    }
    else
      rear++;
    
    queue[rear][0] = val;
    queue[rear][1] = p;
  }
}

int getMaxPriority()   //max priority = lowest int value
{
  int i;
  int min, pos;
  pos = 0;
  min = queue[0][1];

  for (i=front; i<=rear; i++)
  {
    if (queue[i][1] < min)
    {
      pos = i;
      min = queue[i][1];
    }
  }
  return pos;
}

void dequeue()
{
  printf("\nDEQUEUE");
  int i, pos;
  if (front == -1)
    printf("\n\nUNDERFLOW");
  else
  {
    pos = getMaxPriority();
    printf("\n\n%d is deleted\n", queue[pos][0]);
    
    for (i=pos; i<rear; i++)
    {
      queue[i][0] = queue[i+1][0];
      queue[i][1] = queue[i+1][1];
    }
    rear--;
  }
}

int main()
{
  int choice;

  printf("\nPRIORITY QUEUE IMPLEMENTED USING ARRAY\n");
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