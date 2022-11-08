// dijkstra

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# define size 10

int n, n_edges=0;

void status(int d[], int S[])
{
	printf("status : \n      ");
    for (int i=1; i<n; i++)
    	printf("%2d  ", i);

    printf("\n  d : ");
    for (int i=1; i<n; i++)
    	if (d[i] == INT_MAX)
    		printf(" %lc  ", (wint_t)236);
    	else
    		printf("%2d  ", d[i]);
    
    printf("\n  S : ");
    for (int i=1; i<n; i++)
        printf("%2d  ", S[i]);
    printf("\n\n");
}

int extract_min(int d[], int S[])
{
    int pos, min=INT_MAX;
    for (int i=1; i<n; i++)
        if (S[i] == 0) // not visited
            if (d[i] < min)
            {
                pos = i;
                min = d[i];
            }
    return pos;
}

int main()
{
	printf("\nDIJKSTRA ALGORITHM \n(Single Source Shortest Path)\n");
	
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

    // declare arrays to be used
    int *d = (int *) calloc(n,sizeof(int));
    int *S = (int *) calloc(n,sizeof(int));
    for (int i=1; i<n; i++)
    {
    	d[i] = INT_MAX;
        S[i] = 0;
    }

    // set d[source] as 0
    int source = 1;
    d[source] = 0;

    int current_node;
    for (int i=1; i<n; i++)
    {
        // get node with minimum key
        current_node = extract_min(d,S);

        // set the obtained node as visited
        S[current_node] = 1;
        
        // adjacent nodes
        for (int j=1; j<n; j++)
        {
            if (W[current_node][j] > 0)
            // adjacent nodes
            {
                // edge relaxation
                if (d[current_node] + W[current_node][j] < d[j])
                    d[j] = d[current_node] + W[current_node][j];
                
            }
        } 
    }

    // display result
    printf("\n\nFinal costs from node %d to all nodes :-\n  node : ", source);
    for (int i=1; i<n; i++)
        printf("%2d  ", i);

    printf("\n  cost : ");
    for (int i=1; i<n; i++)
        if (d[i] == INT_MAX)
            printf(" %lc  ", (wint_t)236);
        else
            printf("%2d  ", d[i]);
    
    free(d);
    free(S);
    free(W);
}

