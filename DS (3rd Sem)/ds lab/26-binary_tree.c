// Binary Tree
// Write a program to implement creation, insertion & display of Binary Trees
# include <stdio.h>
# include <stdlib.h>
# define null NULL

struct node
{
  int data;
  struct node *left, *right;
};

struct node *root=null, *temp, *new;

void input(struct node *x)
{
  if (x->left == null)
  {
    x->left = new;
  }
  else if (x->right == null)
  {
    x->right = null;
  }
  else
  {
    input(x->left);
  }
  
}

void create()
{
  int n;

  do
  {
    new = (struct node *)malloc(sizeof(struct node));
    new->data = n;
    printf("\n\nCREATING BINARY TREE");
    printf("\nEnter number of nodes : ");
    scanf("%d", &n);
    
    if (root == null)
      root = new;
    else
    {
      //input();
    }
  }
  while (/*code*/1);
  
  
}

int main()
{
  create();

  return 0;
}

