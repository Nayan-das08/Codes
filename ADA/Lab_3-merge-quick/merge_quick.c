// merge sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void swap(int arr[], int i, int j)
{
	int temp = arr[i]; 
	arr[i] = arr[j];
	arr[j] = temp;
}

void merge(int arr[], int start, int m, int end, int *step)
{
	// (*step)++;
	int n1 = (m+1)-start;
	int n2 = end-(m);

	// get two arrays
	int a[n1], b[n2];
	for (int i=0; i<n1; i++)
		a[i] = arr[start+i];
	for (int i=0; i<n2; i++)
		b[i] = arr[m+1+i];

	// merge sort
	int i=0, j=0, k=start; 
	while (i < n1 && j < n2)
	{
		(*step)++;
		if (a[i] < b[j])
			arr[k++] = a[i++];
		else
			arr[k++] = b[j++];
	}
	while (i < n1)
		arr[k++] = a[i++];
	while (j < n2)
		arr[k++] = b[j++];	
}

void sort(int arr[], int start, int end, int *step)
{
	int m;
	if (start < end) 
	// some element exists in arr[start] to arr[end]
	{
		//(*step)++;
		m = (start + end)/2;
		sort(arr, start, m, step);
		sort(arr, m+1, end, step);
		merge(arr, start, m, end, step);
	}	
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

const int MAXSIZE = 1000;

int main()
{
	int arr1[MAXSIZE], arr2[MAXSIZE], step;
	FILE *merge, *quicks;
	merge 	= fopen("merge_vals.dat", "w");
	quicks  = fopen("quick_vals.dat", "w");
	
	printf("Hello");
	for (int n=1; n<=MAXSIZE; n++)
	{
		// get array
		srand(time(0)+rand());
		for (int i=0; i<n; i++)
			arr1[i] = rand()%500;
		for (int i=0; i<n; i++)
			arr2[i] = arr1[i];

		// merge sort
		step = 0;
		sort(arr1, 0, n-1, &step);	
		// printf("n = %3d \tsteps = %6d\n", n, step);
		fprintf(merge, "%d %d\n", n, step);

		// quick sort
		step = 0;
		quick(arr2, 0, n-1, &step);
		// printf("n = %3d \tsteps = %6d\n", n, step);
		fprintf(quicks, "%d %d\n", n, step);
	}
	fclose(merge);
	fclose(quicks);
	printf("\nPlotting the graph");
	system("python test3.py\n\n");

	return 0;
}
