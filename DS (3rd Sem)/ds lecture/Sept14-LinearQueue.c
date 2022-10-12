# include <stdio.h>
# define max 5

int front=0, rear=-1, queue[max];

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
  printf("\nfront = %d", front);
  printf("\nrear = %d", rear);
  printf("\n");
}

void enqueue(int val)
{
  if (isfull() == 1)
    printf("\nOVERFLOW");
  else
  {
    if (front == -1 || rear == -1) //first value inserted
    {
      rear++;
      //front++;  //for front = -1 initialization
    }
    else      //not the first value
      rear++;
    queue[rear] = val;
  } 
  display();
}

void dequeue()
{
  if (isempty() == 1)
    printf("\nUNDERFLOW");
  else
  {
    front++;
  }
  display();
}

int main()
{
  dequeue();    //underflow
  display();

  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);
  enqueue(60);

  dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  
  display();
  return 0;
}