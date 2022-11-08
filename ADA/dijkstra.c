// dijkstra

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# define size 10

int n, n_edges=0;

int min(float d[])
{
	int min_pos = 1;
	for (int i=2; i<n; i++)
		if (d[i] < d[min_pos])
			min_pos = i;
	printf("\n\nmin = %d", d[min_pos]);
	return min_pos;
}

void status(float d[])
{
	printf("d[i] : \n  ");
    for (int i=1; i<n; i++)
    	printf("%2d  ", i);
    printf("\n  ");
    for (int i=1; i<n; i++)
    	if (d[i] == INFINITY)
    		printf(" %lc  ", (wint_t)236);
    	else
    		printf("%2.0f  ", d[i]);
    printf("\n\n");
}

struct edge
{
    int a, b, wt;
};

int main()
{
	printf("\nDIJKSTRA ALGORITHM \n(Single Source Shortest Path)\n");
	
    // printf("\nEnter number of nodes : ");
    // scanf("%d", &n);
    
    // int **W = (int **) malloc((n+1)*sizeof(int *));
    // for (int i=0; i<n+1; i++)
    // {
    //     W[i] = (int *) calloc(n+1, sizeof(int));
    // }

    // printf("\nEnter Adjacency Matrix:\n");
    // for (int i=0; i<n+1; i++)
    // {
    //     for (int j=0; j<n+1; j++)
    //         scanf("%d", &W[i][j]);
    // }

    int W[][10] = {
    	{0, 1, 2, 3, 4, 5, 6},
		{1, 0, 2, 4, 0, 0, 0}, 
		{2, 0, 0, 1, 7, 0, 0}, 
		{3, 0, 0, 0, 0, 3, 0}, 
		{4, 0, 0, 0, 0, 0, 1}, 
		{5, 0, 0, 0, 2, 0, 5}, 
		{6, 0, 0, 0, 0, 0, 0}
    };

    // int W[][10] = {
    //     {0,  1,  2,  3,  4,  5,  6},
    //     {1,  0, 50, 45, 10,  0,  0}, 
    //     {2,  0,  0, 10, 15,  0,  0}, 
    //     {3,  0,  0,  0,  0, 30,  0}, 
    //     {4, 10,  0,  0,  0, 15,  0}, 
    //     {5,  0, 20, 35,  0,  0,  0}, 
    //     {6,  0,  0,  0,  0,  3,  0}       
    // };

    n = 6+1;
    struct edge *edges = (struct edge *) calloc((n*n), (sizeof(struct edge)));

    float *d = (float *) calloc(n,sizeof(float));
    for (int i=1; i<n; i++)
    	d[i] = INFINITY;


    printf("edges :-\n");
    int k=0;
    for (int i=1; i<n; i++)
    {
    	for (int j=1; j<n; j++)
    		if (W[i][j] > 0)
            {
    			printf("  %d,%d = %d\n", i,j, W[i][j]);
                edges[k].a = i;
                edges[k].b = j;
                edges[k].wt = W[i][j];
                k++;
            }
    }

    // set d[source] as 0
    int source = 1;
    d[source] = 0;

    printf("\n\n");
    status(d);
    printf("--------------------------------\n\n");

    int adj_wt;
    int current_node = source;
    int min_key, min_node, j;
    for (int i=1; i<n; i++)
    {
    	printf("adj of %d : ", current_node);
        min_key = INT_MAX;
    	for (j=1; j<n; j++)
    	{
    		if (W[current_node][j] > 0)
            // adjacent nodes
            {
                if (d[current_node] + W[current_node][j] < d[j])
                    d[j] = d[current_node] + W[current_node][j];
                printf("%d(%.0f)  ", j, d[j]);
                if (d[j] < min_key)
                {
                    min_key = d[j];
                    min_node = j;
                }
             /*   adj_wt = W[current_node][j];
    			printf("%d(%d)  ", j, adj_wt);
                // choose node minimum weight
                if (adj_wt < min_wt)
                {
                    min_wt = adj_wt;
                    min_node = j;
                }*/
            }
    	}
        current_node = min_node;
        printf("\nmin_node = %d\n", min_node);
        status(d);
    	printf("\n");
    }

    free(d);
}