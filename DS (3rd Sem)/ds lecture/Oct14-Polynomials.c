// Polynomials implemented using Linked List

# include <stdio.h>
# include <stdlib.h>

struct term
{
  int coeff, exp;
  struct term *next;
};

struct term *start=NULL, *temp, *new;

void display()
{
  temp = start;
  printf("\nPolynomial :  ");
  if (start == NULL)
    printf("--");
  else
  {
    while (temp != NULL)
    {
      if (temp->coeff == 1)
        printf("x^%d", temp->exp);
      
      else if (temp->coeff == 0)
        continue;

      else if (temp->exp == 1)
        printf("%dx", temp->coeff);
      
      else if (temp->exp == 0)
        printf("%d", temp->coeff);
      
      else
        printf("%dx^%d", temp->coeff, temp->exp);
      
      if (temp->next != NULL)
        printf(" + ");
      
      temp = temp->next;
    }
  }
}

void create()
{
  int c, e, ch;
  do
  {
    new = (struct term *)malloc(sizeof(struct term));
    printf("\nEnter Coefficient : ");
    scanf("%d", &c);
    printf("Enter Exponent : ");
    scanf("%d", &e);
    
    new->coeff = c;
    new->exp = e;
    new->next = NULL;

    if (start == NULL)
    {
      start = new;
    }
    else
    {
      temp = start;
      while (temp->next != NULL)    // stops when temp reaches last node
        temp = temp->next;
      temp->next = new;
    }
        
    printf("\ncontinue ? (1 = yes, 0 = no) : ");
    scanf("%d", &ch);
  } while(ch != 0);
  display();
}



int main()
{
  create();
  

  return 0;
}