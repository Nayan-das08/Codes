// quick sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void swap(int arr[], int i, int j)
{
	int temp = arr[i]; 
	arr[i] = arr[j];
	arr[j] = temp;
}

void show_arr(int arr[], int size)
{
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}

int partition(int arr[], int p, int r, int *step)
{
	(*step)++;
	int pivot = arr[r]; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j] <= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 
	// show_arr(arr, size);
	return i;
}

void quick(int arr[], int p, int r, int *step)
{
	int q;
	if (p < r) // elements exist in array
	{
		// (*step)++;
		q = partition(arr, p, r, step);
		quick(arr, p, q-1, step);
		quick(arr, q+1, r, step);
	}
}

const int MAXSIZE = 10000;

int main(int argc, char *argv[])
{
	int arr[MAXSIZE], step;
	int size = atoi(argv[1]);
	FILE *file;
	file = fopen("quick_vals.dat", "w");

	for (int n=1; n<=MAXSIZE; n++)
	{
		srand(time(0)+rand());
		for (int i=0; i<n; i++)
			arr[i] = rand()%100;

		step = 0;
		quick(arr, 0, n-1, &step);
		// printf("n = %3d \tsteps = %6d\n", n, step);
		fprintf(file, "%d %d\n", n, step);
	}
	fclose(file);
	printf("\nPlotting the graph");
	system("python test2.py\n\n");

	return 0;
}