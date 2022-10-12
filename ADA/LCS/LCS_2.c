# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int size = 2;

void get_inputs(char *X, char *Y)
{
	char temp[100];
	strcpy(X,"0");
	strcpy(Y,"0");
	
	printf("Enter X : ");
	scanf("%s",temp);
	strcat(X,temp);
	printf("Enter Y : ");
	scanf("%s",temp);
	strcat(Y,temp);
}

int main(int argc, char *argv[])
{
	printf("LONGEST COMMON SUB-SEQUENCE \nUSING DYNAMIC PROGRAMMING\n\n");
	int verbose;
	if (argc < 2)
		verbose = 0;
	else
		verbose = atoi(argv[1]);

	char X[100], Y[100];
	get_inputs(X,Y);

	int len_X = strlen(X);
	int len_Y = strlen(Y);

	int  C[len_X][len_Y];
	char B[len_X][len_Y];

	printf("\nX : ");
	for (int i=1; i<len_X; i++)
		printf("%c ",X[i]);
	printf("\nY : ");
	for (int i=1; i<len_Y; i++)
		printf("%c ",Y[i]);
	printf("\n\n");

	// put first row and first colum as 0
	for (int i=0; i<len_X; i++)
	{
		C[i][0] = 0;
		B[i][0] = '-';
	}
	for (int j=0; j<len_Y; j++)
	{
		C[0][j] = 0;
		B[0][j] = '-';
	}

	// Fill C[][] and B[][]
	if (verbose == 1)
	{
		printf("i,j \tu,v \tflag \tmax(C)\n");
		printf("------------------------------\n");
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
				// B[i][j] = '↖';
				flag=1;
			}
			else if (C[i-1][j] >= C[i][j-1])
			{
				C[i][j] = C[i-1][j];
				B[i][j] = 'U';
				// B[i][j] = '↑';	
				flag=2;
			}
			else
			{
				C[i][j] = C[i][j-1];
				B[i][j] = 'L';
				// B[i][j] = '←';
				flag=3;
			}
			// to keep track of highest value of C[][]
			if (C[i][j] > C[high_X][high_Y])
			{
				high_X = i;
				high_Y = j;
			}
			if (verbose == 1)
				printf("%d,%d \t%c,%c \t%d \t%d (%d,%d)\n",i,j,X[i],Y[j],flag,C[high_X][high_Y],high_X,high_Y);

		}
	}

	// Display C[][] and B[][]
	printf("\n");

	printf("         ");
	for (int i=1; i<len_Y; i++)
		printf("%c   ",Y[i]);

	printf("\n  +");
	for (int i=0; i<len_Y; i++)
		printf("----");
	printf("\n");
	
	for (int i=0; i<len_X; i++)
	{
		if (i == 0)
			printf("  | ");
		else
			printf("%c | ",X[i]);
		for (int j=0; j<len_Y; j++)
			printf("%2d  ",C[i][j]);
		printf("\n");
	}

	printf("\n\n");
	printf("       ");
	for (int i=1; i<len_Y; i++)
		printf("%c  ",Y[i]);

	printf("\n  +");
	for (int i=0; i<len_Y; i++)
		printf("---");
	printf("\n");
	
	for (int i=0; i<len_X; i++)
	{
		if (i == 0)
			printf("  | ");
		else
			printf("%c | ",X[i]);
		for (int j=0; j<len_Y; j++)
			printf("%c  ",B[i][j]);
		printf("\n");
	}
	printf("\n\n");
	
	// ------------------------------------------------------------

	// Display solution from B[][]
	int i=high_X, j=high_Y;			// start from max(C[][])
	int k=0;						// index variable for LCS[]
	char LCS[ C[high_X][high_Y] ];	// len(size) = max(C[]][])

	while (i > 0 && j > 0)
	{
		if (B[i][j] == 'D')
		// if (B[i][j] == '↖')
		{
			LCS[k] = X[i];
			// printf("%c,%c\n",X[i],LCS[k]);
			i--;
			j--;
			k++;
		}
		else if (B[i][j] == 'L')
		// else if (B[i][j] == '←')
			j--;
		else
			i--;
	}
	LCS[k] = '\0';
	printf("solution = %s\n\n",strrev(LCS));
	printf("length of sub-sequence = %d\n",strlen(LCS));
}

/*
ABCBDAB
BDCABA

10010101
010110110

ACCGGTCGAGTGCGCGGAAGCCGGCCGAA
GTCGTTCGGAATGCCGTTGCTCTGTAAA
*/
