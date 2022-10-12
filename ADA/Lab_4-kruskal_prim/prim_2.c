# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# define w(u,v) mat[u][v]


int n;
int n_Q;

struct edges
{
	int a,b,w;
} MST_edge[28];

struct vertex
{
	int parent, name;
	float key;
};

// QUICK SORT
void swap(struct vertex arr[], int i, int j)
{
	struct vertex temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(struct vertex arr[], int p, int r)
{
	float pivot = arr[r].key; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j].key <= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 
	return i;
}

void quick(struct vertex arr[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(arr, p, r);
		quick(arr, p, q-1);
		quick(arr, q+1, r);
	}
}


void delete(struct vertex u, struct vertex Q[])
{
	int val = u.name;
	int i;
	for (i=0; i<n_Q; i++)
		if (Q[i].name == val)
			break;
	for (; i<n_Q; i++)
		Q[i] = Q[i+1];
	n_Q--;
}

void show_V(struct vertex V[])
{
	printf("\n\n");
	for (int i=0; i<n; i++)
		printf("%d  \tkey = %0.0f  \tparent = %d\n", V[i].name, V[i].key, V[i].parent);
}

void show(struct vertex Q[])
{
	printf("\n\n");
	for (int i=0; i<n_Q; i++)
		printf("%d  \tkey = %0.0f  \tparent = %d\n", Q[i].name, Q[i].key, Q[i].parent);
}

void show_vertex(struct vertex u)
{
	printf("%d  \tkey = %0.0f  \tparent = %d\n", u.name, u.key, u.parent);
}

int get_index_Q(int x, struct vertex Q[])
{
	for (int i=0; i<n_Q; i++)
	{
		if (Q[i].name == x)
			return i;
	}
} 

int get_adj(struct vertex u, int mat[][15], struct vertex V[], struct vertex adj[])
{
	int k=0, x=u.name, count=0, index;
	for (int i=1; i<n+1; i++)
	{
		if (mat[x][i] != 0)
		{
			adj[k++] = V[i-1];
			count++;
		}
	}
	return count;
}

struct vertex min(struct vertex Q[])
{
	quick(Q,0,n_Q-1);
	return Q[0];
}

int v_in_Q(struct vertex v, struct vertex Q[])
{
	for (int i=0; i<n_Q; i++)
		if (Q[i].name == v.name)
			return 1;
	return 0;
}

void update_Q(struct vertex Q[], struct vertex v)
{
	for (int i=0; i<n_Q; i++)
		if (Q[i].name == v.name)
		{
			Q[i].key = v.key;
			Q[i].parent = v.parent;
			break;		
		}
}

void update_V(struct vertex V[], struct vertex v)
{
	int i = v.name;
	V[i-1].key = v.key;
	V[i-1].parent = v.parent;
}

int main()
{
	int mat[15][15] = {
		{0,1,2,3,4,5,6,7,8},
		{1,0,5,0,0,4,0,6,0},
		{2,5,0,3,0,2,4,0,0},
		{3,0,3,0,2,0,1,0,0},
		{4,0,0,2,0,0,2,0,0},
		{5,4,2,0,0,0,6,3,0},
		{6,0,4,1,2,6,0,7,4},
		{7,6,0,0,0,3,7,0,8},
		{8,0,0,0,0,0,4,8,0},
	};

/*	int mat[15][15] = {
		{0,1,2,3,4,5,6},
		{1,0,4,0,0,0,2},
		{2,4,0,6,0,0,3},
		{3,0,6,0,3,0,1},
		{4,0,0,3,0,2,0},
		{5,0,0,0,2,0,4},
		{6,2,3,1,0,4,0}
	};
*/
/*	int mat[15][15] = {
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
		{1, 0, 4, 0, 0, 0, 0, 0, 8, 0},
		{2, 4, 0, 8, 0, 0, 0, 0,11, 0},
		{3, 0, 8, 0, 7, 0, 0, 0, 0, 0},
		{4, 0, 0, 7, 0, 9,14, 0, 0, 0},
		{5, 0, 0, 0, 9, 0, 10, 0, 0, 0},
		{6, 0, 0, 0,14,10, 0, 2, 0, 0},
		{7, 0, 0, 0, 0, 0, 2, 0, 1, 6},
		{8, 8,11, 0, 0, 0, 0, 1, 0, 7},
		{9, 0, 0, 0, 0, 0, 0, 6, 7, 0}
	};
*/
	n = 8;
	struct vertex *Q = (struct vertex *) malloc(n*sizeof(struct vertex));
	for (int i=0; i<n; i++)
	{
		Q[i].name	= i+1;
		Q[i].key 	= INFINITY;
		Q[i].parent = 0; 
	}
	Q[0].key = 0;

	struct vertex *V = (struct vertex *) malloc(n*sizeof(struct vertex));
	memcpy(V,Q,n*sizeof(struct vertex));

	n_Q = n;

	int n_adj, n_MST=0;
	struct vertex u, v;
	struct vertex *adj = (struct vertex *) malloc(n*sizeof(struct vertex));
	// -----------------algorithm starts here-----------------
	
	while (n_Q > 0)
	{
		u = min(Q);
		// show_vertex(u);

		delete(u,Q);
		// show(Q);

		if (u.parent != 0)
		{
			MST_edge[n_MST].a = u.name;
			MST_edge[n_MST].b = u.parent;
			MST_edge[n_MST].w = w(u.name, u.parent);
			n_MST++;
		}

		n_adj = get_adj(u, mat, V, adj);

		// printf("\n\nadj :-\n");
		for (int i=0; i<n_adj; i++)
		{
			v = adj[i];
			// printf("%d",v.name);
			if ((v_in_Q(v,Q)) && (w(u.name, v.name) < v.key))
			{
				// printf(" in Q", v.name);
				v.parent = u.name;
				v.key = w(u.name, v.name);
				update_Q(Q,v);
				update_V(V,v);
			}
			// printf("\n");
		}
		// show(Q);
		// printf("\n---------------------------------------\n\n");
	}

	printf("Edges in MST :-\n");
	for (int i=0; i<n_MST; i++)
	{
		printf("    %d, %d   -> %d\n", MST_edge[i].a, MST_edge[i].b, MST_edge[i].w);
	}

	// ---------------------Adjacency Matrix for MST---------------------
	int a, b, cost=0;;
	int MST[15][15];

	for (int i=0; i<15; i++)
		for (int j=0; j<15; j++)
			MST[i][j] = 0;

	for (int i=0; i<n+1; i++)
	{
		MST[0][i] = i;
		MST[i][0] = i;
	}

	for (int i=0; i<n_MST; i++)
	{
		a = MST_edge[i].a;
		b = MST_edge[i].b;
		MST[a][b] = MST_edge[i].w;
		MST[b][a] = MST_edge[i].w;
		cost += MST_edge[i].w;
	}

	printf("\n\ncost of MST = %d", cost);
	printf("\n\nAdjacency Matrix of MST :-\n");
	for (int i=0; i<n+1; i++)
	{
		printf("    ");
		if (i == 0)
		{
			printf("0 | ");
			for (int i=1; i<=n; i++)
				printf("%d  ", i);
			printf("\n  ----+-");
			for (int i=1; i<=n; i++)
				printf("---");
			printf("\n");
			continue;
		}
		for (int j=0; j<n+1; j++)
		{
			if (MST[i][j] == 0)
				printf("-  ");
			else
				printf("%d  ",MST[i][j]);
			if (j == 0)
				printf("\b| ");
		}
		printf("\n");
	}

	return 0;
}