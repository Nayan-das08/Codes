// quick sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int MAXSIZE = 10000;

void swap(int arr[], int i, int j)
{
	int temp = arr[i]; 
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int p, int r, int size, int *step)
{
	(*step)++;
	int pivot = arr[r]; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j] <= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 

	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	printf("\n");

	return i;
}

void quick(int arr[], int p, int r, int size, int *step)
{
	int q;
	if (p < r) // elements exist in array
	{
		// (*step)++;
		q = partition(arr, p, r, size, step);
		quick(arr, p, q-1, size, step);
		quick(arr, q+1, r, size, step);
	}
}

int main(int argc, char *argv[])
{
	int arr[MAXSIZE], step;
	int size = atoi(argv[1]);

	srand(time(0)+rand());
	for (int i=0; i<size; i++)
		arr[i] = rand()%100;

	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	printf("\n\n");

	step = 0;
	quick(arr, 0, size-1, size, &step);
	
	printf("\n");
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	printf("\n");
	printf("steps = %d", step);

	return 0;
}