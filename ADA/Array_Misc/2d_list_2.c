# include <stdio.h>
# include <stdlib.h>

int n;

struct list_2d
{
	int size;
	int *arr;
};

void define(struct list_2d *x)
{
	n = 0;
	x = (struct list_2d*) malloc((n+1)*sizeof(struct list_2d));
	for (int i=0; i<(n+1); i++)
	{
		x[i].size = 0;
		x[i].arr = (int *) calloc(x->size+1, sizeof(int));
	}
	n++;
}

void append(struct list_2d *x, int val)
{
	x->arr = realloc(x->arr, (++x->size)*sizeof(int));
	x->arr[x->size-1] = val;
}

void show_row(struct list_2d x)
{
	// printf("\n");
	printf("[");
	for (int i=0; i<x.size; i++)
		printf("%d  ", x.arr[i]);
	printf("\b\b]\n");
}

void show(struct list_2d x[])
{
	for (int i=0; i<n; i++)
	{
		show_row(x[i]);
	}
}

int main()
{
	struct list_2d *a;

	define(a);
	
	append(&a[0], 10);
	show(a);	

	append(&a[0], 20);
	show(a);	
	
	free(a);
}