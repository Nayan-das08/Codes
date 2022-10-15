# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int main()
{
	int n;
	printf("Enter number of rows/columns : ");
	scanf("%d", &n);

	int **arr = (int **) malloc(n*sizeof(int *));
	for (int i=0; i<n; i++)
	{
		arr[i] = (int *) calloc(n, sizeof(int));
	}

	printf("\nEnter matrix:\n");
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
		// printf("\n");
	}

	printf("\n");
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			printf("%2d  ", arr[i][j]);
		printf("\n");
	}


	return 0;
}

/*
1 2
3 4
5 6

*/