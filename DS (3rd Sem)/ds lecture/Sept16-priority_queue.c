// priority queue

# include <stdio.h>
# define max 10
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
  printf("front = %d", front);
  printf("\nrear  = %d\n", rear);
}

void enqueue(int val, int p)
{
  if (rear == max-1)      //queue is full
    printf("\n\nOVERFLOW");
  else
  {
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
  display();
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
  int i, pos;
  if (front == -1)
    printf("\n\nUNDERFLOW");
  else
  {
    pos = getMaxPriority();
    for (i=pos; i<rear; i++)
    {
      queue[i][0] = queue[i+1][0];
      queue[i][1] = queue[i+1][1];
    }
    rear--;
  }
  display();
}

int main()
{
  enqueue(10,2);
  enqueue(20,3);
  enqueue(30,1);
  enqueue(40,5);
  enqueue(50,4);
  
  dequeue();
  dequeue();
  dequeue();
  
  //display();
  
  
  return 0;

}