
// merge sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int size = 15;

void merge(int arr[], int start, int m, int end, int tab)
{
	int n1 = (m+1)-start;
	int n2 = end-(m);

	// get two arrays
	int a[n1], b[n2];
	for (int i=0; i<n1; i++)
		a[i] = arr[start+i];
	for (int i=0; i<n2; i++)
		b[i] = arr[m+1+i];

	int i=0, j=0, k=start; 
	while (i < n1 && j < n2)
	{
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

void sort(int arr[], int start, int end, int tab)
{
	int m;
	if (start < end) 
	// some element exists in arr[start] to arr[end]
	{
		m = (start + end)/2;
		sort(arr, start, m, ++tab);
		sort(arr, m+1, end, tab);
		merge(arr, start, m, end, tab);
		for (int i=0; i<size; i++)
			printf("%2d  ", arr[i]);
		printf("\n");
		
	}	
}



int main()
{
	int arr[size];
	srand(time(0)+rand());
	for (int i=0; i<size; i++)
		arr[i] = rand()%100;

	for (int i=0; i<size; i++)
		printf("%2d  ", arr[i]);
	
	printf("\n\n");
	sort(arr, 0, size-1, 0);	

	printf("\n");
	for (int i=0; i<size; i++)
		printf("%2d  ", arr[i]);
	
	return 0;
}
