// double ended queue
// input restricted

# include <stdio.h>
# define max 10

int queue[max], front=-1, rear=-1;

void display()
{
  int i;
  printf("\nQueue : ");
  for (i=front; i<=rear; i++)
    printf("%d  ", queue[i]);
  printf("\nfront = %d", front);
  printf("\nrear  = %d\n", rear);
}

void enqueue(int val)
{
  printf("\nENQUEUE");
  if (rear == max-1)
    printf("\n\nOVERFLOW");
  else
  {
    if (rear == -1 || front == -1)
    {
      front = 0;
      rear = 0;
    }
    else
      rear++;
    
    queue[rear] = val;
  }
  display();
}

void dequeFromFront()
{
  printf("\nDEQUEUE FROM FRONT");
  if (front == -1)
    printf("\n\nUNDERFLOW");
  else
  {
    front++;
  }
  display();
}

void dequeFromRear()
{
  printf("\nDEQUEUE FROM REAR");
  if (front == -1)
    printf("\n\nUNDERFLOW");
  else
  {
    rear--;
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
  
  dequeFromFront();
  dequeFromFront();
  
  dequeFromRear();
  dequeFromRear();
  

  return 0; 
}