// infix to postfix

# include <stdio.h>
# include <string.h>
# define size 10

struct operator
{
  char op;
  int prcdnce;
  int pos;
} plus = {'+', 2, 0},
  minus = {'-', 2, 0},
  multiply = {'*', 1, 0},
  divide = {'/', 1, 0};

char str[size], stack[size], postfix[size];
int top = -1, lenstr, lenpost, top_post=-1;


void display()
{
  int i;
  printf("\n\nStack   :  ");

  if(top == -1)
    printf("empty");
  else
    for (i=0; i<=top; i++)
      printf("%c  ", stack[i]);

  // ------------------------------

  printf("\nPostfix :  ");

  if(top == -1)
    printf("empty");
  else
    for (i=0; i<=top_post; i++)
      printf("%c  ", postfix[i]);
}

void push(char val, char *mode)
{
  if (mode == "stack")
  {  
    if (top == size-1)
      printf("\n\nOVERFLOW");
    else
    {
      top++;
      stack[top] = val;
    }
  }

  else if (mode == "postfix")
  {  
    if (top_post == size-1)
      printf("\n\nOVERFLOW");
    else
    {
      top_post++;
      postfix[top_post] = val;
    }
  } 
  display();
}

void pushplus(int val)
{
  if (stack[top] == '*' || stack[top] == '/')
    push()
}

void set_op_pos()
{
  for (int i=0; i<lenstr; i++)
  {
    if (str[i] == plus.op && plus.pos == 0)
      plus.pos = j++;
    else if (str[i] == minus.op && minus.pos == 0)
      minus.pos = j++;
    else if (str[i] == multiply.op && multiply.pos == 0)
      multiply.pos = j++;
    else if (str[i] == divide.op && divide.pos == 0)
      divide.pos = j++;
  }
}

void traverse()
{
  int i;
  for (i=0; i<lenstr; i++)
  {
    if (str[i] == '(')    
      push(str[i], "stack");

    /*else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
      pushop(str[i]);*/

    else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
      push(str[i], "postfix");

    else
    {
      printf("\n\nEnter valid character string!");
      return;
    }
  }
}

int main()
{
  printf("Enter the string : ");
  gets(str);
  lenstr = strlen(str);
  set_op_pos();
  //traverse();


  return 0;
}