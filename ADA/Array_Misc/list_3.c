# include <stdio.h>
# include <stdlib.h>
# include <string.h>

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

void delete(struct list *x, int n)
{
	int found = 0, i;
	for (i=0; i<x->size; i++)
		if (x->arr[i] == n)
		{
			printf("found at %d",i);
			found = 1;
			break;
		}
	if (found == 1)
	{
		int *temp = (int *) calloc(x->size-1, sizeof(int));
		int k=0;
		for (int j=0; j<x->size; j++)
		{
			if (j != i)
				temp[k++] = x->arr[j];
		}
		free(x->arr);
		x->arr = temp;
	}
	if (found == 0)
		printf("%d is not found in list",n);

}

void show(struct list x)
{
	printf("\n");
	for (int i=0; i<x.size; i++)
		printf("%d  ", x.arr[i]);
	printf("\n");
}

int main()
{
	struct list a;
	define(&a);
	for (int i=1; i<10; i++)
	{
		append(&a, i*10);
		printf("size = %d", a.size);
		show(a);
	}

	delete(&a, 30);
	show(a);
	printf("size = %d",a.size);

	return 0;
}