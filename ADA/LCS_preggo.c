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
	  printf("Enter String 2 : ");
	  scanf("%s",Y);
	  
    int C[m][n];
    int B[m][n];
    
    for(i=0;i<m;i++)
    {
        C[i][0]=0; //First column=0
        B[i][0] = 'N'; 
    }

    for(j=0;j<n;j++)
    {
        C[0][j]=0; //First row=0
        B[i][0] = 'N'; 
    }

  printf("\n String 1 : ");
	for (i=1; i<m; i++)
	printf("%c ",X[i]);
	printf("\n String 2 : ");
	for (i=1; i<n; i++)
	printf("%c ",Y[i]);

    // printf("\n Initial C matrix: ");
    // printf("\n");
    // for(i=1; i<m; i++)
    // {
    //   for(j=1;j<n;j++)
    //   {
    //     printf("%d",C[i][j]);
    //   }
    //   printf("\n");
    // }


    for(i=1; i<m; i++)
    {
      for(j=1;j<n;j++)
      {
        if(X[i]==Y[j]) //Case 1
        {
        C[i][j] = C[i-1][j-1]+1;
        B[i][j]='D'; //Diagonal
        }
        else if (C[i-1][j]>=C[i][j-1]) //Case 2
        {
            C[i][j]=C[i-1][j];
            B[i][j]='U'; //Upwards
        }
        else //Case 3
        {
          C[i][j]=C[i][j-1];
            B[i][j]='L'; //Left
        }
      }
      
    }

    printf("\n C matrix: ");
    printf("\n");
    for(i=1; i<=m; i++)
    {
      for(j=1;j<=n;j++)
      {
        printf("%d",C[i][j]);
      }
      printf("\n");
    }

    printf("\n B matrix: ");
    printf("\n");
    for(i=1; i<m; i++)
    {
      for(j=1;j<n;j++)
      {
        if(B[i][j]=='U')
        printf("%lc", (wint_t)24); //Alternate Code for up arrow = 24
        else if(B[i][j]=='L')
        printf("%lc", (wint_t)27); //Alternate Code for left arrow = 27
        else
        printf("%c",B[i][j]); 
      }
      printf("\n");
    }

  i=m;
  j=n;
  int k=0; // index var for optimal[]
  char optimal[C[m][n]];

  while (i>0 && j>0)
  {
    if (B[i][j] == 'D') //For Diagonal
    {
        optimal[k] = X[i];
        i--;
		j--;
		k++;
    }

    else if (B[i][j]=='U') //For Up
    j--;

    else 
    i--;
  }
  printf("\nLCS = %s",strrev(optimal));

    return 0;
}

