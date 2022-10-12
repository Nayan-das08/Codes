// evaluation of expression

# include <stdio.h>
# include <string.h>
# include <math.h>
# define size 10

char str[size];
int stack[size];
int len, top=-1;

void display()
{
  int i;
  printf("\nStack :  ");
  if (top == -1)
    printf("(empty)");
  else
  {
    for (i=0; i<=top; i++)
      printf("%d  ", stack[i]);
  }
}

void push(int val)
{
  if (top == size-1)
    printf("\n\nOVERFLOW");
  else
  {
    top++;
    stack[top] = val;
  }
  display();
}

int pop()
{
  if (top == -1)
    printf("\n\nUNDERFLOW");
  else
    return stack[top--];
}

void eval(char op)
{
  int a, b;
  a = pop();    // last element
  b = pop();    // second last element

  if (op == '+')
    push(b+a);
  else if (op == '-')
    push(b-a);
  else if (op == '*')
    push(b*a);
  else if (op == '/')
    push(b/a);
  else if (op == '^')
    push(pow(b,a));
  //else 
    //printf("INVALID OPERATOR ENTERED");
}

void traverse()
{
  int i, j;
  char c;
  for (i=0; i<len; i++)
  {
    if (str[i] >= 48 && str[i] <= 57)
      push((int)str[i] - 48);

    else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
      eval(str[i]);
    
    else
      printf("\n\nINVALID CHARACTER ENTERED");
  }
}

int main()
{
  printf("POSTFIX EVALUATION");

  printf("\n\nEnter the string : ");
  gets(str);
  len = strlen(str);

  traverse();
  if (top != 0)
    printf("\n\nThe expression is invalid");
  else
    printf("\n\nResult = %d", stack[top]);

  printf("\n\nstack[top] = %d", stack[top]);
  return 0;
}