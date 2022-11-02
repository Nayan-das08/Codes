#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *X;
    char *Y; 

    char temp[100];
    int i,j,n,m;

    X=(char*)calloc(100, sizeof(char)); //size of X as 100, all 0
    Y=(char*)calloc(100, sizeof(char)); //size of Y as 100, all 0

    printf("\n Enter the size of array X: ");
    scanf("%d",&m); //m=Length(X)
    printf("\n Enter the size of array Y: ");
    scanf("%d",&n); //n=Length(Y)

    X=realloc(X,m); //reallocating dynamically
    Y=realloc(Y,n);

    printf("\n Enter String 1 : ");
    scanf("%s",X);
    strcat(X,temp);
	  printf("Enter String 2 : ");
	  scanf("%s",Y);
    strcat(Y,temp);
	  
    int C[m][n];
    int B[m][n];
    
    for(i=0;i<m;i++)
    {
        C[i][0]=0; //First column=0
        B[i][0] = 'N'; //NULL
    }

    for(j=0;j<n;j++)
    {
        C[0][j]=0; //First row=0
        B[0][j] = 'N'; //NULL
    }

  printf("\n String 1 : ");
	for (i=0; i<m; i++)
	printf("%c ",X[i]);
	printf("\n String 2 : ");
	for (i=0; i<n; i++)
	printf("%c ",Y[i]);

  //To compute values in C & B Matrices

    for(i=1; i<=m; i++)
    {
      for(j=1;j<=n;j++)
      {
        if(X[i]==Y[j]) //Case 1
        {
        C[i][j] = C[i-1][j-1]+1;
        B[i][j]='D'; //Diagonal Direction
        }
        else if (C[i-1][j]>=C[i][j-1]) //Case 2
        {
            C[i][j]=C[i-1][j];
            B[i][j]='U'; //Upwards Direction
        }
        else //Case 3
        {
          C[i][j]=C[i][j-1];
            B[i][j]='L'; //Left Direction
        }
      }
      
    }

    //To print C & B Matrices

    printf("\n C matrix: "); //For cost 
    printf("\n");
    for(i=1; i<=m; i++)
    {
      for(j=1;j<=n;j++)
      {
        printf("%d",C[i][j]);
      }
      printf("\n");
    }

    printf("\n B matrix: "); //For Arrow Directions
    printf("\n");
    for(i=1; i<=m; i++)
    {
      for(j=1;j<=n;j++)
      {
        if(B[i][j]=='U')
        printf("%lc", (wint_t)24); //Alternate Code for up arrow = 24
        else if(B[i][j]=='L')
        printf("%c",B[i][j] ); //Print L i.e, Left
        else
        printf("%c",B[i][j]); //Print D i.e, Diagonal
      }
      printf("\n");
    }
  
  //To get Optimal subsequence
  
  i=m;
  j=n;
  int k=0; // index var for opt[]
  char opt[C[m][n]]; //for optimal solution

  while (i>0 && j>0)
  {
    if (B[i][j] == 'D') //For Diagonal
    {
        opt[k] = X[i];
        i--;
		    j--;
		    k++;
    }

    else if (B[i][j]=='L') //For Left
    j--;

    else //For Up
    i--;
  }
  opt[k] = '\0';
  printf("\nLCS = %s",strrev(opt)); //LCS is obtained by reversing the common sub-string 

  return 0;
}

