# include <stdio.h>
# include <string.h>
# define size 10

char str[size], stack[size];
int len, top=-1;

void display()
{
  int i;
  printf("\nStack :  ");

  if(top == -1)
    printf("empty");
  else
    for (i=0; i<=top; i++)
      printf("%c  ", stack[i]);
  
}

void push(char val)
{
  if (top == size-1)
    printf("\n\nOVERFLOW");
  else
  {
    top++;
    stack[top] = val;
    //printf("\npushed");
  }
  display();
}

void pop()
{
  if (top == -1)
    printf("\n\nUNDERFLOW");
  else
    top--;
  display();
}

int check()
{
  int i;
  for (i=0; i<len; i++)
    if (str[i] != '(' && str[i] != ')')
    {
      printf("\nstr[%d] = %c", i, str[i]);
      return 0;
    }
  return 1;
}

void traverse()
{
  int i;
  for (i=0; i<len; i++)
  {
    if (str[i] == '(')
      push(str[i]);
    else
      if (stack[top] == '(')
        pop();
  }
}

int main()
{
  printf("PARENTHESES CHECKER\n\n");
  printf("Enter the string : ");
  gets(str);
  len = strlen(str);
  
  if (check() == 1)
  {
    traverse();
    if (top == -1)
      printf("\n\nThe string has complete set of parentheses");
    else
      printf("\n\nThe string has incomplete set of parentheses");
  }
  else
    printf("\n\nENTER PARENTHESES ONLY!");

  return 0;
}