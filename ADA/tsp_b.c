// tsp_bc

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# define  z  		INFINITY
# define  size 		10
# define  n_nodes	5
int n = n_nodes+1;
// int size = 10;
int n_size = n_nodes;
float temp[size][size];
	
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
	int node, cost;
} ;

int delete(struct neighbour neighbours[], int val)
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

void algo(struct neighbour *branch, float mat[size][size], int node, int root_cost)
{
	char c[10];
	int red_cost, total_cost;

	memcpy(temp, mat, size*size*sizeof(float));
	sprintf(c, "(%d,%d)",node,branch->node);

	for (int i=1; i<n; i++)
		temp[node][i] = temp[i][branch->node] = INFINITY;
	temp[branch->node][1] = INFINITY;

	red_cost = reduce(temp);
	total_cost = root_cost + mat[node][branch->node] + red_cost;

	printf("\n\ncost(%d,%d) = %d", node, branch->node, total_cost);
	branch->cost = total_cost;
	show(temp, c);
	// return total_cost;
}

int main()
{
	printf("TRAVELLING SALESPERSON PROBLEM \nUsing Branch-&-Bound");
	int root_cost, root_node, node;
	float W[10][10] = {
		{0,  1,  2,  3,  4,  5},
		{1,  z, 20, 30, 10, 11},
		// {1,z,z,z,z,z},
		{2, 15,  z, 16,  4,  2},
		{3,  3,  5,  z,  2,  4},
		{4, 19,  6, 18,  z,  3},
		{5, 16,  4,  7, 16, z}
	};

	int *path = (int *) calloc(n_nodes, sizeof(int));
	struct neighbour *neighbours = (struct neighbour*) calloc(n_nodes, sizeof(struct neighbour));
	for (int i=0; i<n_size; i++)
	{
		neighbours[i].node = i+1;
		neighbours[i].cost = -1;
	}

	root_cost = reduce(W);
	show(W, "W");
	printf("root cost = %d", root_cost);

	node = delete(neighbours, 1);
	root_node = node;
	path[0] = root_node;

	printf("\nneighbours : ");
	for (int i=0; i<n_size; i++)
		printf("%d  ", neighbours[i].node);

	printf("\n\n----------------------------------------------------\n");

	float current_mat[10][10];
	memcpy(current_mat, W, size*size*sizeof(float));
	int k=1;
	// graph traversal begins here
	while (n_size > 0)
	{
		printf("for node %d", node);
		for (int i=0; i<n_size; i++)
		{
			algo(&neighbours[i], current_mat, node, root_cost);
		}
		
		printf("\nneighbours (%d): \n", n_size);
		for (int i=0; i<n_size; i++)
			printf("  %d has cost = %d\n", neighbours[i].node, neighbours[i].cost);
		int min_cost_pos = 0;
		int min_cost_val = neighbours[min_cost_pos].cost;
		for (int i=0; i<n_size; i++)
			if (neighbours[i].cost < min_cost_val)
			{
				min_cost_pos = i;
				min_cost_val = neighbours[min_cost_pos].cost;
			}
		printf("minimum cost = %d at node %d", min_cost_val, neighbours[min_cost_pos].node);
		// once min cost branch is found
			// obtain the (node,branch) matrix from scratch
			// set current_mat to the (node,branch) matrix
		memcpy(temp, current_mat, size*size*sizeof(float));
		for (int i=1; i<n; i++)
			temp[node][i] = temp[i][neighbours[min_cost_pos].node] = INFINITY;
		temp[neighbours[min_cost_pos].node][1] = INFINITY;
		reduce(temp);
		memcpy(current_mat, temp, size*size*sizeof(float));
			// remove that node from neighours[]
			// change node var to current branch
		node = delete(neighbours, neighbours[min_cost_pos].node);
			// change root_cost var to new min_cost_val
		root_cost = min_cost_val;
			// add the chosen node to the path[]
		path[k++] = node;
		printf("\n\n----------------------------------------------------\n");
	}

	printf("Final Path is :\n");
	for (int i=0; i<n_nodes; i++)
		printf("%d -> ", path[i]);
	printf("%d\n", root_node);

	return 0;
}

