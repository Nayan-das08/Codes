# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int size = 2;

int main()
{
	char X[] = {'o','A','B','A','B','A','B','C','D','A','B'};
	char Y[] = {'o','B','D','A','C','A','B','A','B'};
	// char X[] = "oABABABCDAB";
	// char Y[] = "oBDACABAB";

	int len_X = sizeof(X)/sizeof(char);
	int len_Y = sizeof(Y)/sizeof(char);

	int  C[len_X][len_Y];
	char B[len_X][len_Y];

	for (int i=1; i<len_X; i++)
		printf("%c ",X[i]);
	printf("\n");
	for (int i=1; i<len_Y; i++)
		printf("%c ",Y[i]);
	// printf("\n\n");

	// put first row and first colum as 0
	for (int i=0; i<len_X; i++)
	{
		C[i][0] = 0;
		B[i][0] = 'o';
	}
	for (int j=0; j<len_Y; j++)
	{
		C[0][j] = 0;
		B[0][j] = 'o';
	}

	int flag, high_X=0, high_Y=0;
	for (int i=1; i<len_X; i++)
	{
		flag=0;
		for (int j=1; j<len_Y; j++)
		{
			if (X[i] == Y[j])
			{
				C[i][j] = C[i-1][j-1] + 1;
				B[i][j] = 'D';
				flag=1;
			}
			else if (C[i-1][j] >= C[i][j-1])
			{
				C[i][j] = C[i-1][j];
				B[i][j] = 'U';	
				flag=2;
			}
			else
			{
				C[i][j] = C[i][j-1];
				B[i][j] = 'L';
				flag=3;
			}
			// to keep track of highest value of C[][]
			if (C[i][j] > C[high_X][high_Y])
			{
				high_X = i;
				high_Y = j;
			}
			// printf("%d,%d\tflag = %d\t%c,%c \thigh = %d\n",i,j,flag,X[i],Y[j],C[high_X][high_Y]);

		}
	}


	printf("\n\n");
	for (int i=0; i<len_X; i++)
	{
		for (int j=0; j<len_Y; j++)
			printf("%d  ",C[i][j]);
		printf("\n");
	}

	printf("\n\n");
	for (int i=0; i<len_X; i++)
	{
		for (int j=0; j<len_Y; j++)
			printf("%c  ",B[i][j]);
		printf("\n");
	}

	printf("\n\n");
	// int key = B[high_X][high_Y];
	
	int i=high_X, j=high_Y;			// start from max(C[][])
	int k=0;						// index variable for LCS[]
	char LCS[ C[high_X][high_Y] ];	// len(size) = max(C[]][])

	while (i > 0 && j > 0)
	{
		if (B[i][j] == 'D')
		{
			LCS[k] = X[i];
			printf("%c,%c\n",X[i],LCS[k]);
			i--;
			j--;
			k++;
		}
		else if (B[i][j] == 'L')
			j--;
		else
			i--;
	}
	strcat(LCS,"\0");
	// printf("solution = %s",strrev(LCS));
	printf("solution = %s",strrev(LCS));
}