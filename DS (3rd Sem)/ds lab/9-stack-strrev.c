# include <stdio.h>
# include <conio.h>
# include <string.h>
# define size 20

char stack[size];
int top = -1;

void push(char n)
{
  if (top >= size)
    printf("\nSTACK OVERFLOW");
  else
  {
    printf("%c is pushed", n);
    top++;
    stack[top] = n;
  }
}

char pop()
{
  char temp;
  if (top == -1)
    printf("\nSTACK UNDERFLOW");
  else
  {
    printf("%c is popped", stack[top]);
    temp = stack[top];
    top--;
    return temp;
  }
}

void main()
{
  char str[size], rev[size];
  int len, i;

  printf("REVERSING A STRING USING STACK\n");
  printf("\nEnter the string : ");
  gets(str);

  len = strlen(str);

  printf("\nPushing characters of string to stack:-");
  for (i=0; i<len; i++)           //push
  {
    printf("\ni = %d\t", i);
    push(str[i]);
  }

  printf("\n\nThe stack = ");     //print stack
  for (i=0; i<len; i++)
    printf("%c", stack[i]);

  printf("\n\nPopping the characters from the stack and putting them to the string:-");
  for (i=0; i<len; i++)          //pop
  {
    printf("\nj = %d\t", i);
    str[i] = pop();
  } 
    
  printf("\n\nReversed string = %s", str);
  getch();
}