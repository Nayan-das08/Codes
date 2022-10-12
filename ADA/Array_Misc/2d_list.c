# include <stdio.h>
# include <stdlib.h>

int n = 3;

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

void show_row(struct list x)
{
	// printf("\n");
	printf("[");
	for (int i=0; i<x.size; i++)
		printf("%d  ", x.arr[i]);
	printf("\b\b]\n");
}

void show(struct list x[])
{
	for (int i=0; i<n; i++)
	{
		show_row(x[i]);
	}
}

int main()
{
	struct list *a = (struct list *) malloc(n*sizeof(struct list));
	
	for (int i=0; i<n; i++)
		define(&a[i]);

	int count=0;
	for (int i=1; i<=5; i++)
		append(&a[0],count++);

	for (int i=1; i<=4; i++)
		append(&a[1],count++);
	
	for (int i=1; i<=3; i++)
		append(&a[2],count++);
	
	// for (int i=0; i<n; i++)
	// {
	// 	show_row(a[i]);
	// }

	show(a);	
	free(a);
}