 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
# include <string.h>

 int n=5;
int size = 10;

float mini(float x, float y) //to find the min between 2 elements 
{
  if (x < y)
  return x;
  else
  return y;
}


void printmat(float W[][10]) //For printing the matrices
{
  int i,j;
    printf("\n");
    for(i=0; i<=n; i++)
    {
      for(j=0;j<=n;j++)
      {
        if(W[i][j]== INFINITY)
        {
          printf(" ");
          printf("%lc", (wint_t)236); //Alternate Code for infinity symbol
          printf(" ");
        }
        else
        printf("%2d ",(int)W[i][j]); 
      }
      printf("\n");
    }
}


void FW(float W[][10], float D[10][10][10], float P[10][10][10]) //Floyd Warshall Algo function
{
  int i,j,k;

  memcpy(D[0], W, size*size*sizeof(float)); //copies the entire memory of W to D[0] for updation of D Matrix


  for(i=1;i<=n;i++)
  {
    for (j=1;j<=n;j++)
    {
      if((D[0][i][j] == INFINITY) || (D[0][i][j] == 0))
        P[0][i][j]=-1; //put parent as -1 for 0 & infinity edges
        else
        P[0][i][j]=i; //input parent node
    }
  }

printf("\nD[0] matrix: ");
printmat(D[0]);
printf("\nPath[0] matrix: ");
printmat(P[0]);

 for(k=1;k<=n;k++)
 {
  memcpy(P[k], P[k-1], size*size*sizeof(float)); //Copying the memory of previous P matrix to update its vals
  for(i=1;i<=n;i++)
  {
    for (j=1;j<=n;j++)
    {
      D[k][i][j] = mini(D[k-1][i][j], D[k-1][i][k] + D[k-1][k][j]);
      if(D[k][i][j]!=D[k-1][i][j])
        P[k][i][j]=k;
    }
  }
  printf("\nD[%d] matrix is:", k);
  printmat(D[k]);
  printf("\nP[%d] matrix is:", k);
  printmat(P[k]);
 }
  printf("\n Final D matrix: ");
  printmat(D[5]);
  printf("\n Final Path matrix: ");
  printmat(P[5]);
}


void sequence(float P[10][10][10], int start, int end) //gives path sequence between 2 nodes
{
  int parent = (int) P[4][start][end];
  if (parent!=start)
  {
    sequence(P, start, parent); //recursive call from start till parent (node in between)
    sequence (P,parent, end); //recursive call from parent till end 
  }
  else
  printf(" %d ->",end);
}


void finalpath(float P[10][10][10], int start, int end) //for getting final path inc all intermediate nodes 
{
  printf("\n Final Path from %d to %d is: \t",start,end);
  printf("%d -> ",start);
  sequence(P,start,end); //Calling sequence function
  printf("\b\b  "); //to remove extra arrow
}

 int main()
 {
  int i,j,k;
  float y = INFINITY;
  float start, end;
  float W[10][10] = 
  {
        {0,        1, 2, 3, 4, 5},
        {1,        0, 3, 8, y,-4},
        {2,        y, 0, y, 1, 7},
        {3,        y, 4, 0, y, y},
        {4,        2, y,-5, 0, y},
        {5,        y ,y, y, 6, 0}
  };
  printf("\n Initial Adjacency matrix: ");
  printmat(W);

  float D[10][10][10]={0}; //Edges matrix that contains min. cost
  float P[10][10][10]={0}; //Path matrix that contains Parent nodes

  for(k=0;k<=n;k++)
  {
    for(i=0;i<=n;i++)
    {
      P[k][0][i]=P[k][i][0]=i;
      D[k][0][i]=D[k][i][0]=i;
    }
  }

  FW(W,D,P);

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i!=j) //for all non-similar set of nodes
      {
        start=i;
        end=j;
        finalpath(P,start,end); //To give sequence acc to P matrix
      }
    }
  }

  return 0;
 }