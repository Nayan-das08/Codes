//circular queue

# include <stdio.h>
# define max 5

int queue[max], front=-1, rear=-1;

void display()
{
  int i;
  printf("\n\nQueue :  ");
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
  printf("\nfront = %d", front);
  printf("\nrear = %d", rear);
  
}

void enqueue(int val)
{
  if ((front == 0 && rear == max-1) || (rear == front-1))
    printf("\n\nOVERFLOW");
  else
    {
      if (front == -1 && rear == -1)
      {
        front = 0;
        rear = 0;
      }
      else if (rear == max-1 && front != 0)
        rear = 0;
      else 
        rear++;
      queue[rear] = val;
    }
  display();
}

void dequeue()
{
  if (front == -1)
    printf("\n\nUNDERFLOW");
  else 
  {
    printf("\n\n%d is deleted", queue[front]);
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
  display();
}

int main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);
  enqueue(60);
  enqueue(70);
  
  dequeue();
  dequeue();
  dequeue();

  enqueue(100);
  
}