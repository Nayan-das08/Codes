# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int n_set;

struct edges
{
	int a,b,w;
} edge[105], MST_edge[105];


// QUICK SORT
void swap(struct edges arr[], int i, int j)
{
	struct edges temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(struct edges arr[], int p, int r)
{
	int pivot = arr[r].w; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j].w <= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 
	return i;
}

void quick(struct edges arr[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(arr, p, r);
		quick(arr, p, q-1);
		quick(arr, q+1, r);
	}
}


struct list
{
	int size;
	int *arr;
};

void define(struct list *x)
{
	x->size = 0;
	x->arr = (int *) calloc(x->size+1, sizeof(int));
}

void append(struct list *x, int n)
{
	x->arr = realloc(x->arr, (++x->size)*sizeof(int));
	x->arr[x->size-1] = n;
}

void show_set(struct list set[])
{
	for (int i=0; i<n_set; i++)
	{
		printf("[");
		for (int j=0; j<set[i].size; j++)
			printf("%d  ", set[i].arr[j]);
		printf("\b\b]  ");
	}
	printf("\n");
}

int find_set(struct list set[], int u)
{
	for (int i=0; i<n_set; i++)
		for (int j=0; j<set[i].size; j++)
			if (set[i].arr[j] == u)
				return i;
}

void delete(struct list set[], struct list x)
{
	int i;
	for (i=0; i<n_set; i++)
		if (memcmp(set[i].arr, x.arr, x.size) == 0)
			break;

	for (; i<n_set; i++)
		set[i] = set[i+1];
	n_set--;
}
void union_set(struct list set[], int p, int q)
{
	struct list a, b;
	a = set[p];
	b = set[q];
	delete(set, a);
	delete(set, b);
	for (int i=0; i<b.size; i++)
		append(&a, b.arr[i]);
	n_set++;
	set[n_set-1] = a;
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
	int n=8;
	n_set = n;

	// get edges
	int k=0;
	for (int i=1; i<n; i++)
	{
		for (int j=i+1; j<=n; j++)
		{
			if (mat[i][j] > 0)
			{
				edge[k].a = i;
				edge[k].b = j;
				edge[k].w = mat[i][j];
				k++;
			}
		}
	}

	int n_edges = k;
	
	// sort edges
	quick(edge, 0, k-1);

	// display edges
	printf("edges in the graph are :-\n");
	for (int i=0; i<n_edges; i++)
		printf("    %d, %d   -> %d\n", edge[i].a, edge[i].b, edge[i].w);


	// struct list set[n_set];
	struct list *set = (struct list*) malloc(n_set*sizeof(struct list));
	for (int i=0; i<n_set; i++)
		// set[i] = (int *) calloc(n, sizeof(int));
		define(&set[i]);

	for (int i=0; i<n; i++)
		append(&set[i],i+1);

	printf("\n\n");
	show_set(set);

	int u,v,p,q;
	int n_MST = 0;
	int cost=0; 
	printf("\n\n");
	for (int i=0; i<k; i++)
	{
		u = edge[i].a;
		v = edge[i].b;
		p = find_set(set,u);
		q = find_set(set,v);
		printf("%d found in set no. %d\n", u, p);
		printf("%d found in set no. %d\n", v, q);
		// printf("%d,%d  ->  %d,%d\n", u, v, p, q);
		if (p != q)
		{
			union_set(set,p,q);
			show_set(set);
			MST_edge[n_MST++] = edge[i];
			cost+=edge[i].w;
		}
		else
			printf("found in same set, thus rejected\n");	
		printf("\n\n");
	}

	printf("edges in the MST :-\n");
	for (int i=0; i<n_MST; i++)
		printf("    %d, %d   -> %d\n", MST_edge[i].a, MST_edge[i].b, MST_edge[i].w);

	printf("\n\ncost of MST = %d", cost);

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
		u = MST_edge[i].a;
		v = MST_edge[i].b;
		MST[u][v] = MST_edge[i].w;
		MST[v][u] = MST_edge[i].w;
	}

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
}