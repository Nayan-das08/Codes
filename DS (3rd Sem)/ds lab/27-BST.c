// binary tree

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# define null NULL

struct node
{
  int data;
  struct node *left, *right;
};

struct node *root=null, *temp, *new, *temp2;

void inorder(struct node *x)
{
  if (x != null)
  {
    inorder(x->left);
    printf("%d  ", x->data);
    inorder(x->right);
  }
}
void preorder(struct node *x)
{
  if (x != null)
  {
    printf("%d  ", x->data);
    preorder(x->left);
    preorder(x->right);
  }
}
void postorder(struct node *x)
{
  if (x != null)
  {
    postorder(x->left);
    postorder(x->right);
    printf("%d  ", x->data);
  }
}
void display()
{
  if (root == null)
    printf("Tree is empty");
  else
  {
    printf("inorder   : ");
    inorder(root);

    printf("\npreorder  : ");
    preorder(root);

    printf("\npostorder : ");
    postorder(root);
    printf("\n");
  }
}

void create()
{
  int n;
  if (root == null)
  {
    printf("\nEnter data : ");
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    new->left = new->right = null;
    new->data = n;
    root = new;
    printf("a tree is created\n");
  }
  else
  {
    printf("The tree already exists\n");
  }
}
void insert()
{
  int n;
  struct node *parent=null;
  
  if (root == null)   // tree is empty
  {
    create();
  }
  else
  {
    printf("\nEnter data : ");
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    new->left = new->right = null;
    new->data = n;
    
    temp = root;
    while (temp != null)   // we will check n vs temp.data till temp reaches null 
    {
      parent = temp;
      if (n < temp->data)
        temp = temp->left;
      else
        temp = temp->right;
    }
    // after the loop, *parent is at a leaf node
    if (n < parent->data)
      parent->left = new;
    else
      parent->right = new;
  }
}

void delete()
{
  int n, flag=0;
  struct node *parent=null;

  printf("Enter node to be deleted : ");
  scanf("%d", &n);

  temp = root;
  while (temp != null && n != temp->data)  
  {
    parent = temp;
    if (n < temp->data)
      temp = temp->left;
    else
      temp = temp->right;
  }
  
  if (temp == null)
    printf("\nNode not found");
  else if (temp == root)    // only one element in tree
  {
    root = null;
    free(temp);
  }
  else
  {
    /*printf("\nThe node   is %d", temp->data);
    printf("\nThe parent is %d", parent->data);*/
    
    // temp => node to be deleted
    // parent => parent node of temp
    // both are given correctly from the while loop

    if (temp->left != null && temp->right != null)    // 3rd case, 2 children
    {
      // find inorder successor and replace
      printf("\ncase 3");
      struct node *suc, *psuc;
      suc = temp->right;
      while (suc->left != null)
      {
        psuc = suc;
        suc = suc->left;
      }
      if (suc->left != null || suc->right != null) // 2nd case, 1 child
      {
        
        printf("\ncase 2");
        // find the child (left or right)
        if (temp->left == null)   // the child is on right
          temp2 = temp->right;    
        else                      // the child is on left
          temp2 = temp->right;

        // replace node to be deleted (temp) with its child (temp2)
        if (temp->data < parent->data)
        {
          parent->left = temp2;        
        }
        else                          
        {
          parent ->right = temp2;
        }
        
        free(temp);
      }
      else    // 1st case, no children
      { 
        // simply free the node from memory
        printf("\ncase 1");
        if (temp->data < parent->data)    // if the temp is on left of parent
        {
          parent->left = null;            
        }
        else                              // if the temp is on right of parent
        {
          parent ->right = null;
        }
        free(temp);
      }
    }  
    else if (temp->left != null || temp->right != null) // 2nd case, 1 child
    {
      
      printf("\ncase 2");
      // find the child (left or right)
      if (temp->left == null)   // the child is on right
        temp2 = temp->right;    
      else                      // the child is on left
        temp2 = temp->right;

      // replace node to be deleted (temp) with its child (temp2)
      if (temp->data < parent->data)
      {
        parent->left = temp2;        
      }
      else                          
      {
        parent ->right = temp2;
      }
      
      free(temp);
    }
    else    // 1st case, no children
    { 
      // simply free the node from memory
      printf("\ncase 1");
      if (temp->data < parent->data)    // if the temp is on left of parent
      {
        parent->left = null;            
      }
      else                              // if the temp is on right of parent
      {
        parent ->right = null;
      }
      free(temp);
    }
  
  
  }
    

}

int main()
{
  int ch;
  //do
  while (1)
  {
    printf("\n1. create");
    printf("\n2. insert");
    printf("\n3. display");
    printf("\n4. delete");
    printf("\n0. exit");
    
    printf("\n\nchoice : ");
    scanf("%d", &ch);

    switch (ch)
    {
      case 1:
        create();
        break;
      
      case 2:
        insert();
        break;
      
      case 3:
        display();
        break;
      
      case 4:
        delete();
        break;
      
      case 0:
        printf("Exiting the prgram...\n\n");
        exit(0);
        break;
      
      default:
        printf("\nInvalid choice...");
        printf("\nPress any key to enter again");
        getch();
    }
    /*if (ch >= 1 && ch <= 3)
    {
      printf("continue ? : ");
      scanf("%d", &ch);
      if (ch == 0)
        printf("Exiting the prgram...");
    }*/

    printf("\n---------------------\n");
  } //while (ch != 0);
  return 0;
}