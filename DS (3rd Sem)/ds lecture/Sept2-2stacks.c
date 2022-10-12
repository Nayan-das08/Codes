// 2 stacks in one declared array

# include <stdio.h>
# define max 7

int stack[max]={0};
int topA=-1;
int topB=max;

void display(int n) 
{
  int i;
  if (n == 1)
  {
    printf("stack A :  ");
    for (i=0; i<=topA; i++)
      printf("%d\t", stack[i]);
  }
  else if (n == 2)
  {
    printf("stack B :  ");
    for (i=max-1; i>=topB; i--)
      printf("%d\t", stack[i]);
  }
  printf("\n");
}

void pushA() 
{
  int n;
  printf("\nPUSH in stack A");
  if (topB-topA == 1)
    printf("\nSTACK OVERFLOW");
  else 
  {
    printf("\nEnter the number : ");
    scanf("%d", &n);
    topA++;
    stack[topA] = n;
  }
  display(1);
}

void pushB() 
{
  int n;
  printf("\nPUSH in stack B");
  if (topB-topA == 1)
    printf("\nSTACK OVERFLOW");
  else 
  {
    printf("\nEnter the number : ");
    scanf("%d", &n);
    topB--;
    stack[topB] = n;
  }
  display(2);
}

void popA()
{
  printf("\nPOP in stack A");
  if (topA == -1)
    printf("\nSTACK UNDERFLOW");
  else 
    topA--;
  printf("\n");
  display(1);
}

void popB()
{
  printf("\nPOP in stack B");
  if (topB == max)
    printf("\nSTACK UNDERFLOW");
  else
    topB++;
  printf("\n");
  display(2);
}

void main()
{
  pushA(5);
  pushA(10);
  pushB(13);
  pushB(20);

  printf("\n");
  display(1);
  display(2);
}
