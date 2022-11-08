// bellman_ford

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int n;

void status(int d[])
{
	printf("d[i] : \n  ");
    for (int i=1; i<n; i++)
    	printf("%2d  ", i);
    printf("\n  ");
    for (int i=1; i<n; i++)
    	if (d[i] == INT_MAX)
    		printf(" %lc  ", (wint_t)236);
    	else
    		printf("%2d  ", d[i]);
    printf("\n\n");
}

struct edge
{
	int a,b,wt;
};

int main()
{
	printf("\nBELLMAN-FORD ALGORITHM \n(Single Source Shortest Path)\n");
	
	// get the adjacency matrix from user
    printf("\nEnter number of nodes : ");
    scanf("%d", &n);
    n++;
    int **W = (int **) malloc((n)*sizeof(int *));
    for (int i=0; i<n+1; i++)
    {
        W[i] = (int *) calloc(n, sizeof(int));
    }

    printf("\nEnter Adjacency Matrix:\n");
    for (int i=0; i<n; i++)
    {
        printf("    ");
        for (int j=0; j<n; j++)
        {
            scanf("%d", &W[i][j]);
        }
    }

    struct edge *edges = (struct edge *) calloc((n*n), (sizeof(struct edge)));

    int k=0, n_edges;
    for (int i=1; i<n; i++)
    {
    	for (int j=1; j<n; j++)
    		if (W[i][j] != 0)
            {
                edges[k].a = i;
                edges[k].b = j;
                edges[k].wt = W[i][j];
                k++;
            }
    }
    n_edges = k;

    int *d = (int *) calloc(n,sizeof(int));
    for (int i=1; i<n; i++)
    	d[i] = INT_MAX;

    // set d[source] as 0
    int source = 1;
    d[source] = 0;

    int u,v,w,flag=1;
    for (int i=1; i<(n-1); i++)
    {
    	for (int j=0; j<n_edges; j++)
    	{
    		// get edge
    		u = edges[j].a;
    		v = edges[j].b;
    		w = edges[j].wt;

    		// edge relaxation
    		if (d[u] + w < d[v])
                    d[v] = d[u] + w;
    	}
    }
    // checking for negative weight cycles
    for (int j=0; j<n_edges; j++)
	{
		u = edges[j].a;
		v = edges[j].b;
		w = edges[j].wt;

		if (d[u] + w < d[v])
            flag = 0;
	}

	// if no negative weight cycles found
	if (flag == 1)
	{
		printf("\n\nFinal costs from node %d to all nodes :-\n  node : ", source);
    for (int i=1; i<n; i++)
        printf("%2d  ", i);

    printf("\n  cost : ");
    for (int i=1; i<n; i++)
        if (d[i] == INT_MAX)
            printf(" %lc  ", (wint_t)236);
        else
            printf("%2d  ", d[i]);
	}
	else
		printf("\n\nNegative weight cycles found\nBellman-Ford Algorithm has failed here");

	free(d);
	free(W);
}