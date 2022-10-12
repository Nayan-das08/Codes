# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define min(a,b) (a<b)?a:b

int size=0;


void append(int arr[], int n)
{
	arr = realloc(arr, (++size)*sizeof(int));
	arr[size-1] = n;
}

void show(int arr[])
{
	printf("\n");
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}

int pop(int arr[])
{
	int element = arr[0];
	for (int i=1; i<size; i++)
	{
		arr[i-1] = arr[i];
	}
	size--;
	return element;
}

int main()
{
	int *arr = (int*) malloc((size+1)*sizeof(int));
	
	for (int i=0; i<10; i++)
	{
		append(arr,(i)*10);
		printf("size = %2d\t",size);
		show(arr);

	}

	append(arr,1000);
	printf("\nsize = %d\n",size);
	show(arr);

	printf("\npopped value = %d", pop(arr));
	printf("\npopped value = %d", pop(arr));
	printf("\npopped value = %d", pop(arr));
	show(arr);
}