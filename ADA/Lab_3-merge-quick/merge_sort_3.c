// merge sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

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

const int MAXSIZE = 10000;

int main()
{
	int arr[MAXSIZE], step;
	FILE *file;
	file = fopen("merge_vals.dat", "w");

	for (int n=1; n<=MAXSIZE; n++)
	{
		// get array
		srand(time(0)+rand());
		for (int i=0; i<n; i++)
			arr[i] = rand()%500;

		// sort
		step = 0;
		sort(arr, 0, n-1, &step);	
		// printf("n = %3d \tsteps = %6d\n", n, step);
		fprintf(file, "%d %d\n", n, step);
	}
	fclose(file);
	printf("\nPlotting the graph");
	system("python test.py\n\n");

	return 0;
}
