// tsp_bc

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# define  z  INFINITY

int n = 5+1;
int size = 10;
int n_size = 5;

void show(float arr[size][size], char name[])
{
	char space[10] = "";
	for (int i=0; i<strlen(name); i++)
        strcat(space, " ");

	printf("\n\n%s : ", name);
	for (int i=0; i<n; i++)
	{
		if (i == 0)
		{
			for (int j=0; j<n; j++)
				if (j == 0)
					printf("%2.0f | ", arr[i][j]);
				else
					printf("%3.0f ", arr[i][j]);
			printf("\n%s   ", space);
			for (int j=0; j<n; j++)
				printf("----");
			printf("--");
		}
		else
		{
			printf("%s   ", space);
			for (int j=0; j<n; j++)
				if (j == 0)
					printf("%2.0f | ", arr[i][j]);
				else
				{
					if (arr[i][j] == INFINITY)
						printf("  %lc ", (wint_t)236);
					else
						printf("%3.0f ", arr[i][j]);
				}

		}	
		printf("\n");
	}
	printf("\n");
}

int reduce(float arr[size][size])
{
	float min, red=0;
	for (int i=1; i<n; i++)
	{
		min = arr[i][1];
		for (int j=1; j<n; j++)
			if (arr[i][j] < min)
				min = arr[i][j];
		// printf("min for row %d = %0.f\n", i, min);
		
		if (min == INFINITY)
			min = 0;
		red += min;
		
		for (int j=1; j<n; j++)
			arr[i][j] -= min;
	}
	// printf("red = %.0f\n\n", red);
	// show(arr, "row red");
	
	for (int j=1; j<n; j++)
	{
		min = arr[1][j];
		for (int i=1; i<n; i++)
			if (arr[i][j] < min)
				min = arr[i][j];
		// printf("min for col %d = %0.f\n", j, min);
		if (min == INFINITY)
			min = 0;
		for (int i=1; i<n; i++)
			arr[i][j] -= min;
		red += min;
	}
	// show(arr, "col red");
	// printf("red = %.0f\n\n", red);
	
	return red;
}

struct neighbour
{
	int node, int cost;
} neighbours[n_size];

int delete(int neighbours[], int val)
{
	int i;
	for (i=0; i<n_size; i++)
		if (neighbours[i].node == val)
			break;
	for (; i<n_size; i++)
		neighbours[i] = neighbours[i+1];
	n_size--;
	return val;
}

int algo(int branch, float W[size][size], int node, int root_cost);

int main()
{
	int root_cost, node;
	float W[10][10] = {
		{0,  1,  2,  3,  4,  5},
		{1,  z, 20, 30, 10, 11},
		// {1,z,z,z,z,z},
		{2, 15,  z, 16,  4,  2},
		{3,  3,  5,  z,  2,  4},
		{4, 19,  6, 18,  z,  3},
		{5, 16,  4,  7, 16, z}
	};

	int *neighbours = (int *) calloc(n_size, sizeof(int));
	for (int i=0; i<n_size; i++)
		neighbours[i] = i+1;

	root_cost = reduce(W);
	
	show(W, "W");
	printf("root cost = %d", root_cost);

	node = delete(neighbours, 1);

	printf("\nneighbours : ");
	for (int i=0; i<n_size; i++)
		printf("%d  ", neighbours[i].node);


	int cost;
	for (int i=0; i<n_size; i++)
	{
		cost = algo(neighbours[i], W, node, root_cost);
	}
	
	show(W, "W");

	return 0;
}

int algo(int branch, float mat[size][size], int node, int root_cost)
{
	float temp[size][size];
	char c[10];
	int red_cost, total_cost;

	memcpy(temp, mat, size*size*sizeof(float));
	sprintf(c, "(%d,%d)",node,branch);

	for (int i=1; i<n; i++)
		temp[node][i] = temp[i][branch] = INFINITY;
	temp[branch][1] = INFINITY;

	red_cost = reduce(temp);
	total_cost = root_cost + mat[node][branch] + red_cost;

	printf("\n\ncost(%d,%d) = %d", node, branch, total_cost);
	show(temp, c);
	return total_cost;
}